#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void genBillHead(char name[50], char date[20])
{
    printf("\t\tRestaurant Name\n\n");
    printf("Date: %s\n\n", date);
    printf("Invoice to: %s\n\n", name);
    printf("Items\t\tQuantity\t\tTotal\t\t\n");
}
                //char item[50], int qty, float price
void genBillBody(char item[50], int qty, float price)
{
    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
}

void genBillFooter(float total)
{
    printf("\n");
    float dis = 0.1 * total;
    float netTotal = total - dis;
    float cgst = 0.09 * netTotal, finalTotal = netTotal + 2 * cgst;
    printf("Sub total: \t\t%d", total);
    printf("Discount @10%s\t\t%.2f", "%", dis);
    printf("\n\t\t\t");
    printf("Net total: %.2f", netTotal);
    printf("CGST @9%s: %.2f", "%", cgst);
    printf("SGST @9%s: %.2f", "%", cgst);
    printf("------------------------");
    printf("Grand total: %.2f", finalTotal);
    printf("------------------------");
}

int main()
{
    char item[50];
    int qty;
    float price;
    // genBillBody();
}
