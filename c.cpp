#include <stdio.h>
int main () {
int g, r;
double h, w, n;
  
while (1) {

printf("[성별입력] 님자면 1, 여자면 2 를 입력하세요: ");
scanf("%d", &g);
if(g != 1 && g != 2) {printf("잘못입력했습니다. 1 또는 2 만을 입력해주새요"); continue;}

printf("[키입력] cm 를 기준으로 허여 키를 적어주새요 )150~200 cm 권장: ");
scanf("%lf", &h);
if(g==1){w=0.08×h+3} 
else{w=0.07×h+4}

printf("[중간결과] 예측된 엄지손톱폭: %.1f mm\n ", w);

printf("[횟수입력] 반복된 엄지손톱 횟수: ");
scanf("%lf", &n);

printf("[최종결과] 예측된 물체의 길이: %.1f mm\n ", w×n);



  


printf("재시도하시겠습니까? (예=1, 아니요=0)");
scanf("%d", &r);
if(r==0) { break;}

}

printf("프로그럄을 종료합니다.");















  return 0;
}
