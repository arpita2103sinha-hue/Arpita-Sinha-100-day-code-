#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];   
    float salary;
} Employee;

void write_employees(const char *filename, Employee *emps, size_t count) {
    FILE *fp = fopen(filename, "wb"); 
    if (!fp) {
        perror("fopen for write");
        exit(EXIT_FAILURE);
    }

    size_t written = fwrite(emps, sizeof(Employee), count, fp);
    if (written != count) {
        fprintf(stderr, "Error: only wrote %zu of %zu records\n", written, count);
        fclose(fp);
        exit(EXIT_FAILURE);
    }

    fclose(fp);
}

void append_employee(const char *filename, const Employee *emp) {
    FILE *fp = fopen(filename, "ab"); 
    if (!fp) {
        perror("fopen for append");
        exit(EXIT_FAILURE);
    }

    if (fwrite(emp, sizeof(Employee), 1, fp) != 1) {
        perror("fwrite append");
        fclose(fp);
        exit(EXIT_FAILURE);
    }

    fclose(fp);
}

void read_employees(const char *filename) {
    FILE *fp = fopen(filename, "rb"); 
    if (!fp) {
        perror("fopen for read");
        exit(EXIT_FAILURE);
    }

    Employee e;
    size_t r;
    printf("ID\tName\t\t\tSalary\n");
    printf("-------------------------------------\n");
    while ((r = fread(&e, sizeof(Employee), 1, fp)) == 1) {
        printf("%d\t%-20s\t%.2f\n", e.id, e.name, e.salary);
    }

    if (ferror(fp)) {
        perror("fread");
    }

    fclose(fp);
}

int main(void) {
    const char *fname = "employees.dat";

    Employee emps[3] = {
        {101, "Arpita Sharma", 45000.50f},
        {102, "Rahul Verma",   52000.00f},
        {103, "Sneha Gupta",   48000.75f}
    };

    
    write_employees(fname, emps, 3);

    
    Employee extra = {104, "Aman Singh", 49999.99f};
    append_employee(fname, &extra);

   
    read_employees(fname);

    return 0;
}

