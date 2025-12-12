/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    int a,r,t;
    double f,e,g,c=600001,din=624001,kar=639001,an=600002,ar=600106;
    printf("Enter Your Age: ");
    scanf("%d",&a);
    if(a>18)
    {
        printf("Enter Your Pincode");
        scanf("%lf",&g);
        if(g==c)
        {
            printf("Your City Is Chennai\n");
            printf("Enter Your Taluka Pin Code: ");
            scanf("%lf",&f);
            if(f==an)
            {
                printf("Enter Your Voter Id:");
                scanf("%3d",&r);
                if(r==122)
                {
                    goto table1;
                }
                else if(r==123)
                {
                    goto table1;
                }
                else
                {
                    printf("Invaild Input");
                }
            }
            else if(f==ar)
            {
                printf("Enter Your Voter Id:");
                scanf("%3d",&r);
                if(r==221)
                {
                    goto table1;
                }
                else if(r==222)
                {
                    goto table1;
                }
                else
                {
                    printf("Ivaild Input");
                }
            }
            else
            {
                printf("Invaild Input");
            }
        }
        else if(g==din)
        {
            printf("Your City is Dindugal\n");
            printf("Enter Your Taluka Pin Code:");
            scanf("%lf",&f);
            if(f==624710)
            {
                printf("Enter Your Voter Id:");
                scanf("%3d",&r);
                if(r==331)
                {
                goto table1;
                }
                else if(r=332)
                {
                goto table1;
                }
                else
                {
                printf("Invaild Input");
                }
            }
            else if(f==624601)
            {
                printf("Enter Your Voter Id:");
                scanf("%3d",&r);
                if(r=441)
                {
                    goto table1;
                }
                else if(r==442)
                {
                    goto table1;
                }
                else
                {
                    printf("Invaild Input");
                }
            }
        }
        else if(g==kar)
        {
            printf("Your City is Karur\n");
            printf("Enter Your Taluka Pin Code: ");
            scanf("%lf",&f);
            if(f==639002)
            {
                printf("Enter Your Voter Id: ");
                scanf("%3d",&r);
                if(r==551)
                {
                    goto table1;
                }
                else if(r==552)
                {
                    goto table1;
                }
                else
                {
                    printf("Invaild Input");
                }
            }
            else if(f==639003)
            {
                printf("Enter Your Voter Id:");
                scanf("%3d",&r);
                if(r==661)
                {
                    goto table1;
                }
                else if(r==662)
                {
                    goto table1;
                }
                else 
                {
                    printf("Invail Input");
                }
            }
            else
            {
                printf("Your Pin Code is wrong");
            }
        }
        table1:
        printf("1.DMK\n2.MMK\n3.JJK\n4.TTM\nEnter Your Choice\n");
        scanf("%d",&t);
        switch(t)
        {
            case 1:
                   printf("You Vote For DMK");
                   printf("Thank You For Voting\n");
                   break;
            case 2:
                   printf("You Vote For MMK");
                   printf("Thank You For Voting\n");
                   break;
            case 3:
                   printf("You Vote For JJk");
                   printf("Thank You For Voting\n");
                   break;
            case 4:
                   printf("You Vote For TTM ");
                   printf("Thank You For Voting\n");
                   break;
        }
    }
    else
    {
        printf("Your Are Not Eligible For Voting\n");
    }
    return 0;
}

