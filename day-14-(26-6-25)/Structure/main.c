#include <stdio.h>

int cid = 0, pid = 0, bid = 0;

// Customer Structure
struct Customer {
    int cusId;
    char cusName[50];
    char cusPhNo[10];
    char cusEmail[50];
} cus[100];

// Product Structure
struct Product {
    int prodId;
    char prodName[50];
    char prodQuan[5];
    char prodPrice[10];
} prod[100];

// Billing Structure
struct Billing {
    int billId;
    int cusId;
    int numProd;
    struct Items {
        int itmId;
        int itmQuan;
    } itm[100];
} bill[100];

// Customer Functions
void createCustomer() {
    cus[cid].cusId = cid + 1;
    printf("Enter Your Name: ");
    scanf("%s", cus[cid].cusName);
    printf("Enter Your Phone Number: ");
    scanf("%s", cus[cid].cusPhNo);
    printf("Enter Your Email: ");
    scanf("%s", cus[cid].cusEmail);
    printf("Customer Registered Successfully!\n");
    cid++;
}

void displayCustomers() {
    for (int i = 0; i < cid; i++) {
        printf("Name of the Customer: %s\n", cus[i].cusName);
    }
}

void displayDetails() {
    int m;
    printf("Enter the Customer ID: ");
    scanf("%d", &m);
    if (m < 1 || m > cid) {
        printf("Invalid Customer ID.\n");
        return;
    }
    printf("Customer Name: %s\n", cus[m - 1].cusName);
    printf("Customer Ph.No.: %s\n", cus[m - 1].cusPhNo);
    printf("Customer Email: %s\n", cus[m - 1].cusEmail);
}

// Product Functions
void createProducts() {
    prod[pid].prodId = pid + 1;
    printf("Enter the Product Name: ");
    scanf("%s", prod[pid].prodName);
    printf("Enter the Product Quantity: ");
    scanf("%s", prod[pid].prodQuan);
    printf("Enter the Product Price: ");
    scanf("%s", prod[pid].prodPrice);
    printf("Product Added Successfully!\n");
    pid++;
}

void displayProducts() {
    for (int i = 0; i < pid; i++) {
        printf("Product Name: %s\n", prod[i].prodName);
    }
}

// Billing Functions
void createBill() {
    bill[bid].billId = bid + 1;
    printf("Enter the Customer ID: ");
    scanf("%d", &bill[bid].cusId);
    printf("Enter the Number of Products: ");
    scanf("%d", &bill[bid].numProd);
    for (int i = 0; i < bill[bid].numProd; i++) {
        printf("Enter the Product ID: ");
        scanf("%d", &bill[bid].itm[i].itmId);
        printf("Enter the Product Quantity: ");
        scanf("%d", &bill[bid].itm[i].itmQuan);
    }
    bid++;
    printf("Bill Created Successfully!\n");
}

void displayBillForCustomer() {
    int x;
    printf("Enter the Customer ID: ");
    scanf("%d", &x);
    if (x < 1 || x > cid) {
        printf("Invalid Customer ID.\n");
        return;
    }
    printf("Customer Name: %s\n", cus[x - 1].cusName);
    printf("Customer Ph.No.: %s\n", cus[x - 1].cusPhNo);
    printf("Customer Email: %s\n", cus[x - 1].cusEmail);
    
    int found = 0;
    for (int i = 0; i < bid; i++) {
        if (bill[i].cusId == x) {
            found = 1;
            printf("Bill ID: %d\n", bill[i].billId);
            for (int j = 0; j < bill[i].numProd; j++) {
                printf("Product ID: %d\n", bill[i].itm[j].itmId);
                printf("Product Quantity: %d\n", bill[i].itm[j].itmQuan);
            }
        }
    }
    if (!found) {
        printf("No bills found for this customer.\n");
    }
}

void displayAllBills() {
    for (int i = 0; i < bid; i++) {
        printf("Bill ID: %d\n", bill[i].billId);
        for (int j = 0; j < bill[i].numProd; j++) {
            printf("Item ID: %d, Quantity: %d\n", bill[i].itm[j].itmId, bill[i].itm[j].itmQuan);
        }
    }
}

// Main Program with Role-Based Access
int main() {
    int role;
    printf("Login as:\n1. Admin\n2. Customer\nEnter your choice: ");
    scanf("%d", &role);

    while (1) {
        int n;
        if (role == 1) {
            // Admin Menu
            printf("\n----- ADMIN MENU -----\n");
            printf("1) Create Product\n2) Display Products\n3) Create Bill\n4) Display All Bills\n5) Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &n);
            switch (n) {
                case 1: createProducts(); break;
                case 2: displayProducts(); break;
                case 3: createBill(); break;
                case 4: displayAllBills(); break;
                case 5: return 0;
                default: printf("Invalid option. Try again.\n");
            }
        } else if (role == 2) {
            // Customer Menu
            printf("\n----- CUSTOMER MENU -----\n");
            printf("1) Register as Customer\n2) Display All Customers\n3) View My Details\n4) View My Bills\n5) Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &n);
            switch (n) {
                case 1: createCustomer(); break;
                case 2: displayCustomers(); break;
                case 3: displayDetails(); break;
                case 4: displayBillForCustomer(); break;
                case 5: return 0;
                default: printf("Invalid option. Try again.\n");
            }
        } else {
            printf("Invalid login role.\n");
            break;
        }
    }

    return 0;
}
