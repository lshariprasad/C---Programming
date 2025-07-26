//Shop Management Using Structure and union
#include<stdio.h>

     //Book -> Name , Author , Price
     //Cell -> Model, Color  , Price
struct store
{
    double price; //8
    char *name  ; //4
    char *author; //4
    char *model ; //4
    char *color ; //4
}o;

    struct store2
    {
        double price;
        union{
            struct{
                char *name  ;
                char *author;
            }book;
            struct{
                char *model;
                char *color;
            }cell;
        }product;
    }o2;
int main()
{
    o.model="Moto";
    o.color="Red";
    o.price=13500;

    printf("Size : %d",sizeof(struct store)); //40
    printf("\n");
    printf("Size : %d",sizeof(struct store2)); //24
    o2.product.cell.model="Moto";
    o2.product.cell.color="Red";
    o2.price    =13560;
    o2.price    =19245156;


    return  0;
}
