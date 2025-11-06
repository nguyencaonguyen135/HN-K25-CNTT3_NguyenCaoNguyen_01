#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j;
	int arr[100];
	int choose, sorted = 0, index, value, count = 0, maxIndex = i, temp;
	
	
	
	do{
			printf("\n===========================MENU=============================\n");
			printf("1, Nhap so luong phan tu va gia tri tung phan tu cho mang\n");
			printf("2, In ra gia tri cac phan tu trong mang\n");
			printf("3, In cac so la so nguyen to co trong mang\n");
			printf("4, Tim gia tri nho nhat trong mang\n");
			printf("5, Them moi mot phan tu vao vi tri cu the\n");
			printf("6, Xoa phan tu tai mot vi tri cu the\n");
			printf("7, Sap xep mang the thu tu giam dan(selection sort)\n");
			printf("8, Kiem tra su ton tai cua phan tu co trong mang\n");
			printf("9, In mang sao cho toan bo so le dung truoc, so chan dung sau nhung khong lam thay doi thu tu cac so chan le ban dau\n");
			printf("10, Sap xep mang theo thu tu nguoc lai");
			printf("\n\nNhap vao lua chon: ");
			scanf("%d",&choose);
		
		switch(choose){
			case 1:{
				do{
				printf("Nhap so phan tu n: ");
				scanf("%d",&n);
				if(n < 1 || n > 100){
					printf("So phan tu khong hop le \n");
					n = 0;
					break;
				}
			}while(n < 1 || n > 100);
				printf("\n");
				for(i=0; i<n ;i++){
					printf("Nhap phan tu arr[%d] = ",i);
					scanf("%d",&arr[i]);
				}
				sorted = 0;	
				break;
			}
			case 2:{
				if(n == 0){
					printf("Mang rong\n");
				}
				printf("Mang hien tai: ");
				for(i=0; i<n; i++){
					printf("%5d",arr[i]);
				}	
				break;
			}
			case 3:{
				if(n == 0){
					printf("Mang rong\n");
				}
				break;
				printf("Cac so nguyen to co trong mang: ");
				break;
			}
			case 4:{
				if(n == 0){
					printf("Mang rong\n");
				}	
				break;
			}
			case 5:{
				if(n >= 100){
					printf("Mang da day!");
					break;
				}
				printf("nhap chi so can chen: ");
				scanf("%d",&index );
				printf("nhap gia tri can chen: ");
				scanf("%d",&value);
				if(index < 0 || index > n){
					printf("chi so khong hop le!!! \n");
					break;
				}
				for(i = n; i > index;i--){
					arr[i] = arr[i-1];
				}
				arr[index] = value;
				n++;
				printf("da chen phan tu %d vao chi so %d \n",value,index);
				sorted = 0;
				break;
			}
			case 6:{
				if(n == 0){
					printf("Mang rong\n");
				}
				printf("nhap gia tri can xoa: ");
				scanf("%d",&value);
				
				for(i=0; i<n; i++){
					if(arr[i] == value){
					for(j = i; j < n - 1; j++){
						arr[j] = arr[j+1];
					}
					n--;
					i--;
					count++;
					}
				}
				if(count == 0){
					printf("Khong co phan tu nao co gia tri %d\n",value);
				}else{
					printf("Da xoa %d phan co gia tri %d\n",count,value);
				}
				break;
			}
			case 7:{
				if(n == 0){
					printf("mang rong");
					break;
				}
				printf("Selection  Sort (decrease)\n");
						for(i = 0; i < n - 1; i++){
							for(j = i + 1; j < n; j++){
								if(arr[j] > arr[maxIndex]){
									maxIndex = j;
								}
							}
							int temp = arr[i];
							arr[i] = arr[maxIndex];
							arr[maxIndex] = temp;
						}
						printf("Mang da duoc sap xep (selection sort) \n");
						sorted = 1;
						break;				
			}
			case 8:{
				
				break;
			}
			case 9:{
				printf("Cac so le trong mang la: ");
				for(i=0; i<n; i++){
					if(arr[i]%2 != 0){
						printf("%5d",arr[i]);
					}
				}
				printf("\nCac so chan trong mang la: ");
				for(i=0; i<n; i++){
					if(arr[i]%2 == 0){
						printf("%5d",arr[i]);
					}
				}
				break;
			}
			case 10:{
			
				break;
			}
			default:
				printf("Loi! Ban nhap khong dung tu 1-10");
				break;
		}
		
	}while(1);

	return 0;
}
