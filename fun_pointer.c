#include <stdio.h>
/**
 * 题目:有一个数组存放了10个学生的成绩,用不同的方法输出数组中的全部元素
 */

void fun_point_arr(  );

/*
 *传入一个数组,数组大小
 *返回一个排序后的数组
 *方法:冒泡法
*/
int *fun_maopao( int arr[  ],int size );
int main(  ){
     int size;
     int i,*p;
     fun_point_arr(  );
     printf("\n数组的排序( 冒泡法 )\n");
      int arr[ 10 ] = {19,17,20,18,16,22,24,15,23,25};
      size = sizeof( arr ) / sizeof( arr[ 0 ] );
      p = fun_maopao( arr ,size );
      for (i = 0; i < size; i++,p++) {
           printf("%d  ", *p);
      }
      printf( "\n" );
     return 0;
}


int *fun_maopao( int arr[  ],int size ){
     int i,temp,j,h;
     for( i = 0;i < size ; i ++){
          for( j = 0;j < size -1 - i; j++ ){
               if( arr[ j ] > arr[ j+1 ] ){
                    temp = arr[ j ];
                    arr[ j ] = arr[ j+1 ];
                    arr[ j+1 ] = temp;
               }
          }
     }
     return arr;
}

void fun_point_arr(  ){
     int arr[ 10 ] = {19,17,20,18,16,22,24,15,23,25};
     int i, *p;
     p = arr;
     /*① 用数组下标输出*/
     printf("① 用数组下标输出\n");
     for( i = 0; i < 10; i++ ){
          printf("%d  ", arr[ i ]);
     }
     /*②通过数组名计算数组元素地址,找到元素*/
     printf( "\n②通过数组名计算数组元素地址,找到元素\n" );
     for( i = 0; i < 10; i++ ){
          printf("%d  ",*( arr+i ) );
     }
     /*③通过指针变量计算数组元素地址,找到元素*/
     printf("\n③通过指针变量计算数组元素地址,找到元素\n");
     for( i = 0; i < 10; i++ ){
          printf("%d  ",*( p +i ) );
     }
     /*④用指针变量先后指向各数组元素*/
     printf("\n④用指针变量先后指向各数组元素\n");
     for (p; p < (arr+10); p++) {
          printf("%d  ",*p);
     }
     /*⑤其他输出*/
     printf("\n⑤其他输出\n");
     p = arr;
     for (i = 0; i < 10; i++,p++) {
          printf("%d  ", *p);
     }

     printf("\n");
}
