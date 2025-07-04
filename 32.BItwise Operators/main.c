  #include<stdio.h>
  int main()
  {
      int a,b,c,d,e,f,g,h,i,j,k,l;
      int And_value,Or_value,Xor_value,Not_value,Left_Shift,Right_Shift;
      printf("\nAnd_Value\n");
      printf("\nEnter The And value a : ");
      scanf("%d",&a);
      printf("\n");

      printf("\nEnter The And value b : ");
      scanf("%d",&b);
      printf("\n");

      And_value=a&b;
      printf("\n Bitwise And : %d ",And_value);//If two conduction are true then its output will be 1(true)
      printf("\n");

      printf("\nOr_Value\n");
      printf("\nEnter The Or value c : ");
      scanf("%d",&c);
      printf("\n");

      printf("\nEnter The Or value d : ");
      scanf("%d",&d);
      printf("\n");

      Or_value=c|d;
      printf("\n Bitwise Or  : %d ",Or_value);//If any One of the Conduction are true then its output will be 1(true)
      printf("\n");

      printf("\nXor_value\n");
      printf("\nEnter The Xor value For e : ");
      scanf("%d",&e);
      printf("\n");

      printf("\nEnter The Xor Value For f : ");
      scanf("%d",&f);
      printf("\n");

      Xor_value=e^f;// Different is 1 and Same
      printf("\n Bitwise Xor : %d ",Xor_value);//If the conduction is true then it will change it changes into false (The Value Will be Opposite)
      printf("\n");

      printf("\nNot_value\n");
      printf("\nEnter The Value g : ");
      scanf("%d",&g);
      printf("\n");

      Not_value=~g;
      printf("\n Bitwise Not : %d ",Not_value);//The value will be add by 1 and That total value will become miniso
      printf("\n");

      printf("\nLeft_Shift\n");
      printf("\nEnter The Value i : ");
      scanf("%d",&i);
      printf("\n");

      printf("\nEnter The Left Shift j : ");
      scanf("%d",&j);
      printf("\n");

      Left_Shift=i<<j;
      printf("\nLeft Shift   : %d ",Left_Shift);//This binary value will be add extra 2 zero and Change The Value Total Binary Value.
      printf("\n");

      printf("\nRight_Shift\n");
      printf("\nEnter The Value k : ");
      scanf("%d",&k);
      printf("\n");

      printf("\nEnter The Right Shift l : ");
      scanf("%d",&l);
      printf("\n");

      Right_Shift=k>>l;
      printf("\nRight Shift   :%d ",Right_Shift);
      printf("\n");

      return 0;



  }
