#include <stdio.h>

int main(){
int i,d1,m1,y1,d2,m2,y2;
int sum1,sum2,sum3;

printf("Enter Your Date Of Birth: ");
scanf("%d %d %d",&d1,&m1,&y1);

printf("Enter Current Date : ");
scanf("%d %d %d",&d2,&m2,&y2);

if((d1 < 1 || d1 > 31) ||(d2<1 || d2>31) || (m1 < 1 || m1>12) || (m2<1 || m2>12) || (y1<0 && y2 <0)){
    printf("Enter Real Number ");
}

else{


    sum3 = y2 - y1;
    if(d2>=d1){
        sum1 = d2 - d1;
    }
    else{
        m2 = m2 - 1;
        d2 = d2 + 30;
        sum1 = d2 - d1;
    }

    if(m2 >= m1){
        sum2 = m2 - m1;
    }
    else{
        sum3= sum3 -1;
        m2 = m2 + 12;
        sum2 = m2 - m1;
    }

printf("%d Years %d Month %d Days",sum3,sum2,sum1);


}

return 0;
}