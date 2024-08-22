#include<stdio.h>
#include<math.h>

int main(){
float true,approx;
int num;
printf("Enter True Value:");
scanf("%f",&true);
printf("Enter Total Number of Approx Values:");
scanf("%d",&num);
float LeastAbsoluteValue,temp;
for(int i =1;i<=num;i++){
    printf("Enter Approx Value %d:",i);
    scanf("%f",&temp);
    if(i==1){
        LeastAbsoluteValue=temp;
    }
    else{
        if(fabs(true- LeastAbsoluteValue)<fabs(true-temp)){
           LeastAbsoluteValue=temp;
        }
}
printf("Least Absolute Value is:%f\n",LeastAbsoluteValue);
return 0;
}
}