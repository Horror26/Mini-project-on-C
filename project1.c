#include<stdio.h>
#include<string.h>


struct hosptial {
    char H_name[1][100];
    char location[1][100];
    int available_bed;
    float rating ;  
    char contact[1][100];
    char doctor_name[1][100];
    int price;
   
};

void getData();
int donate(int blood[], int type);

int main() {
    printf( "\t\t=================================================\n"
            "\t\t\t| Health Care Organization System |\n"
            "\t\t=================================================\n");
    int n;
    
    
    
    char H_names[4][100]={"H1","H2","H3","H4"};
    char locations[4][100]={"Mumbai   ", "Bangalore","Amravati ", "Nagpur   "};
    int available_beds[4]={ 4, 6, 9, 5 };
    float ratings[4] = { 5.5, 4.3, 3.4, 5.8 };
    char contacts[4][100] = { "657534XXX7", "298766XXX2", "324565XXX9","343456XXX4" };
    char doctor_names[4][100] = { "D1", "D2", "D3", "D4" };
    int prices[4] = { 4000, 1500, 3000, 2500};
  
    
  
     printf("\n Hospitals DATA:");
    printf("\n");
    printf("\n");

	printf( "HospitalName	 ");
	printf( "Location	 ");
	printf( "Beds_Available	 ");
	printf("Rating	 ");
	printf("Hospital_Contact	 ");
	printf("Doctor_Name	 ");
	printf("Price_Per_Bed	 \n");
    
    struct hosptial h1 ;
    struct hosptial h2 ;
    struct hosptial h3 ;
    struct hosptial h4 ;
    
    strcpy(h1.H_name[0],H_names[0]);
    strcpy(h1.location[0],locations[0]);
    h1.available_bed=available_beds[0];
    h1.rating=ratings[0];
    strcpy(h1.contact[0],contacts[0]);
    strcpy(h1.doctor_name[0],doctor_names[0]);
    h1.price=prices[0];
    
    strcpy(h2.H_name[0],H_names[1]);
    strcpy(h2.location[0],locations[1]);
    h2.available_bed=available_beds[1];
    h2.rating=ratings[1];
    strcpy(h2.contact[0],contacts[1]);
    strcpy(h2.doctor_name[0],doctor_names[1]);
    h2.price=prices[1];
    
    strcpy(h3.H_name[0],H_names[2]);
    strcpy(h3.location[0],locations[2]);
    h3.available_bed=available_beds[2];
    h3.rating=ratings[2];
    strcpy(h3.contact[0],contacts[2]);
    strcpy(h3.doctor_name[0],doctor_names[2]);
    h3.price=prices[2];
    
    strcpy(h4.H_name[0],H_names[3]);
    strcpy(h4.location[0],locations[3]);
    h4.available_bed=available_beds[3];
    h4.rating=ratings[3];
    strcpy(h4.contact[0],contacts[3]);
    strcpy(h4.doctor_name[0],doctor_names[3]);
    h4.price=prices[3];
    
    printf("    %s",h1.H_name[0]);
    printf("            %s",h1.location[0]);
    printf("             %d",h1.available_bed);
    printf("         %.1f",h1.rating);
    printf("       %s",h1.contact[0]);
    printf("                %s",h1.doctor_name[0]);
    printf("             %d",h1.price);
    
    printf("\n");
    
    printf("    %s",h2.H_name[0]);
    printf("            %s",h2.location[0]);
    printf("             %d",h2.available_bed);
    printf("         %.1f",h2.rating);
    printf("       %s",h2.contact[0]);
    printf("                %s",h2.doctor_name[0]);
    printf("             %d",h2.price);
    
    printf("\n");
    
    printf("    %s",h3.H_name[0]);
    printf("            %s",h3.location[0]);
    printf("             %d",h3.available_bed);
    printf("         %.1f",h3.rating);
    printf("       %s",h3.contact[0]);
    printf("                %s",h3.doctor_name[0]);
    printf("             %d",h3.price);
    
    printf("\n");
    
    printf("    %s",h4.H_name[0]);
    printf("            %s",h4.location[0]);
    printf("             %d",h4.available_bed);
    printf("         %.1f",h4.rating);
    printf("       %s",h4.contact[0]);
    printf("                %s",h4.doctor_name[0]);
    printf("             %d",h4.price);
   
    
   int blood[8] = { 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};   
                //    AB+   AB-   A+    A-    B+    B-    O+    O-
    int type = -1;
    while(1){
        printf("\n\t\tHighest no of beds\t(1)\n\t\tHighest Rating \t\t(2)\n\t\tLowest Price \t\t(3)\n\t\tBlood Donation \t\t(4)\n\t \tExit \t\t\t(5)\n\t");
        printf("\t\t::Enter Your Choice::    ");
        scanf("%d", &n);

        switch(n)
        {
            case 1:  printf( "\t\t\t|Highest no of beds |\n"
                           "\t\t\t =================\n");
                           int temp=0,i,j;
                        for (int i = 0; i < 4; i++) {     
                        for (int j = i+1; j <4; j++) {     
                           if(available_beds[i] < available_beds[j]) {    
                               temp =available_beds[i];    
                               available_beds[i] = available_beds[j];    
                              available_beds[j] = temp;    
                           }     
                        }       
                    }   
                                         printf("\n");    
                        printf("\t\tHighest no of beds available is: \n\t\t\t\t");   
                           
                            printf("||%d|| ", available_beds[0]);    
                          
                       break;
            case 2:  printf( "\t\t\t|Highest Rating |\n"
                           "\t\t\t =================\n");
                           for (int i = 0; i < 4; i++) {     
                        for (int j = i+1; j <4; j++) {     
                           if(ratings[i] < ratings[j]) {    
                               temp =ratings[i];    
                               ratings[i] = ratings[j];    
                              ratings[j] = temp;    
                           }     
                        }     
                    }   
                                         printf("\n");    
                        printf("\t\t\tHighest rated Hosptial is : \n\t\t\t\t");   
                           
                            printf(" ||%.1f|| ", ratings[0]);    
                          
                       break;
                       
             case 3:   printf( "\t\t\t|Lowest price |\n"
                           "\t\t\t =================\n");
                           for (int i = 0; i < 4; i++) {     
                        for (int j = i+1; j <4; j++) {     
                           if(prices[i] > prices[j]) {    
                               temp =prices[i];    
                               prices[i] = prices[j];    
                               prices[j] = temp;    
                           }     
                        }     
                    }   
                                         printf("\n");    
                        printf("\t\t\tLowest priced Hosptial is : \n\t\t\t\t");   
                           
                            printf("  ||%d||", prices[0]);        
                           break ;
              case 4:   printf( "\t\t\t| Donation System |\n"
                        "\t\t\t =================\n");
                getData();

                printf( "\n\t\tAB+ \t\t(0)\n\t\tAB- \t\t(1)\n\t\tA+ \t\t(2)\n\t\tA-\t\t(3)\n"
                        "\t\tB+ \t\t(4)\n\t\tB- \t\t(5)\n\t\tO+ \t\t(6)\n\t\tO-\t\t(7)\n");
                printf("\n\t\tEnter Your Blood Type: \t\t");
                scanf("%d", &type);    
                blood[type] = donate(blood, type);
                break;          
              case 5:  printf( "\t\t\t|Exit |\n"
                           "\t\t\t =================\n"); 
                           return 0;
              
              default : printf("\t\t\t|Enter Wrong Choice|\n");            
    }
}

    
}
void getData(){
    
    char gender[12];
    printf("\t\tEnter Your Gender: \t\t");
    scanf("%s", &gender);

    
    char fname[10], lname[10];
    printf("\t\tEnter Your Full Name: \t\t");
    scanf("%s %s", &fname, &lname);

    
    int age;
    printf("\t\tEnter Your Age: \t\t");
    scanf("%d", &age);
 
   
    return;
}

int donate(int blood[], int type){ 
    int don_blood = 0;                                          
    printf("\t\tAmount Of Blood To Donate: \t");
    scanf("%d", &don_blood);
    printf("\n");

        donation:
        blood[type] += don_blood;

    printf("\t\tTHANK YOU FOR YOUR COOPERATION\n\n");

    printf("\t\tThe Blood Contents are: \n\t");
        for(int i = 0; i < 8; i++)
        {
            printf("\t%d-ml", blood[i]);
        }
        printf("\n\t\t   AB+ \t   AB- \t   A+ \t   A- \t   B+ \t   B- \t   O+ \t   O- \n\n");

    return blood[type];
}


