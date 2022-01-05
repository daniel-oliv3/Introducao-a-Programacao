#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 8. Criar um algoritmo para entrar com quatro números e descobrir sua ordem crescente e armazena-los em
//quatro variáveis com os seguintes nomes: maior, intermediário1, intermediario2 e menor (suponha quatro
//números diferentes):

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a, b, c, d, maior, intermediario1, intermediario2, menor;
	printf("Informe o primeiro número: \n");
	scanf("%f",&a);
	printf("Informe o segundo número: \n");
	scanf("%f",&b);
	printf("Informe o terceiro número: \n");
	scanf("%f",&c);
	printf("Informe o quarto número: \n");
	scanf("%f",&d);
	if(a > b && b > c && c > d){ /* Início das condições com A maior*/
		menor = d;
		intermediario2 = c;
		intermediario1 = b;
		maior = a;
	}else{
		if(a > b && b > d && d > c){
			menor = c;
			intermediario2 = d;
			intermediario1 = b;
			maior = a;
		}else{
			if(a > c && c > b && b > d){
				menor=d; 
				intermediario2=b;
				intermediario1=c;
				maior=a;
			}else{
				if(a > c && c > d && d > b){
					menor=b; 
					intermediario2=d;
					intermediario1=c;
					maior=a;
				}else{
					if(a > d && d > b && b > c){
						menor=c; 
						intermediario2=b;
						intermediario1=d;
						maior=a;
					}else{
						if(a > d && d > c && c > b){
							menor=b; 
							intermediario2=c;
							intermediario1=d;
							maior=a;
						}else{
							if(b > a && a > c && c > d){ /* Início das condições com B maior*/
								menor=d; 
								intermediario2=c;
								intermediario1=a;
								maior=b;
							}else{
								if(b > a && a > d && d > c){
									menor=c; 
									intermediario2=d;
									intermediario1=a;
									maior=b;
								}else{
									if(b > c && c > a && a > d){
										menor=d; 
										intermediario2=a;
										intermediario1=c;
										maior=b;
									}else{
										if(b > c && c > d && d > a){
											menor=a; 
											intermediario2=d;
											intermediario1=c;
											maior=b;
										}else{
											if(b > d && d > a && a > c){
												menor=c; 
												intermediario2=a;
												intermediario1=d;
												maior=b;
											}else{
												if(b > d && d > c && c > a){
													menor=a; 
													intermediario2=c;
													intermediario1=d;
													maior=b;
												}else{
													if(c > a && a > b && b > d){ /* Início das condições com C maior*/
														menor=d; 
														intermediario2=b;
														intermediario1=a;
														maior=c;
													}else{
														if(c > a && a > b && b > d){
															menor=d; 
															intermediario2=b;
															intermediario1=a;
															maior=c;
														}else{
															if(c > a && a > d && d > b){
																menor=b; 
																intermediario2=d;
																intermediario1=a;
																maior=c;
															}else{
																if(c > b && b > a && a > d){
																	menor=d; 
																	intermediario2=a;
																	intermediario1=b;
																	maior=c;
																}else{
																	if(c > b && b > d && d > a){
																		menor=a; 
																		intermediario2=d;
																		intermediario1=b;
																		maior=c;
																	}else{
																		if(c > d && d > a && a > b){
																			menor=c; 
																			intermediario2=a;
																			intermediario1=d;
																			maior=b;
																		}else{
																			if(c > d && d > b && b > a){
																				menor=a; 
																				intermediario2=b;
																				intermediario1=d;
																				maior=c;
																			}else{
																				if(d > a && a > b && b > c){ /* Início das condições com D maior*/
																					menor=c; 
																					intermediario2=b;
																					intermediario1=a;
																					maior=d;
																				}else{
																					if(d > a && a > c && c > b){
																						menor=b; 
																						intermediario2=c;
																						intermediario1=a;
																						maior=d;
																					}else{
																						if(d > b && b > a && a > c){
																							menor=c; 
																							intermediario2=a;
																							intermediario1=b;
																							maior=d;
																						}else{
																							if(d > b && b > c && c > a){
																								menor=a; 
																								intermediario2=c;
																								intermediario1=b;
																								maior=d;
																							}else{
																								if(d > c && c > a && a > b){
																									menor=b; 
																									intermediario2=a;
																									intermediario1=c;
																									maior=d;
																								}else{
																									if(d > c && c > b && b > a){
																										menor=a; 
																										intermediario2=b;
																										intermediario1=c;
																										maior=d;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("\n==== Valores Digitados ====\n");
	printf("a...............: %10.2f\n",a);	
	printf("b...............: %10.2f\n",b);
	printf("c...............: %10.2f\n",c);
	printf("d...............: %10.2f\n",d);
	
	printf("=== Lista em Ordem Crescente ===\n");
	printf("Menor...........: %10.2f\n",menor);
	printf("Intermediario2..: %10.2f\n",intermediario2);
	printf("Intermediario1..: %10.2f\n",intermediario1);
	printf("Maior...........: %10.2f\n",maior);
	
	system("Pause");
	return 0;
}

