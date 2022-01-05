#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,d,maior=0,intermediario1=0,intermediario2=0,menor=0;
	
	printf("Informe os quatro números: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b && a>c && a>d && b>c && b>d && c>d){
		maior=a;
		intermediario2=b;
		intermediario1=c;
		menor=d;
	}else{
		if(a>b && a>d && a>c && b>d && b>c && d>c){
			maior=a;
			intermediario2=b;
			intermediario1=d;
			menor=c;
		}else{
			if(a>c && a>b && a>d && c>b && c>d && b>d){
				maior=a;
				intermediario2=c;
				intermediario1=b;
				menor=d;
			}else{
				if(a>c && a>d && a>b && c>d && c>b && d>b){
					maior=a;
					intermediario2=c;
					intermediario1=d;
					menor=b;
				}else{
					if(a>d && a>b && a>c && d>b && d>c && b>c){
						maior=a;
						intermediario2=d;
						intermediario1=b;
						menor=c;
					}else{
						if(a>d && a>c && a>b && d>c && d>b && c>b){
							maior=a;
							intermediario2=d;
							intermediario1=c;
							menor=b;
						}else{
							if(b>a && b>c && b>d && a>c && a>d && c>d){
								maior=b;
								intermediario2=a;
								intermediario1=c;
								menor=d;
							}else{
								if(b>a && b>d && b>c && a>d && a>c && d>c){
									maior=b;
									intermediario2=a;
									intermediario1=d;
									menor=c;
								}else{
									if(b>d && b>a && b>c && d>a && d>c && a>c){
										maior=b;
										intermediario2=d;
										intermediario1=a;
										menor=c;
									}else{
										if(b>d && b>c && b>a && d>c && d>a && c>a){
											maior=b;
											intermediario2=d;
											intermediario1=c;
											menor=a;
										}else{
											if(b>c && b>d && b>a && c>d && c>a && d>a){
												maior=b;
												intermediario2=c;
												intermediario1=d;
												menor=a;
											}else{
												if(b>c && b>a && b>d && c>a && c>d && a>d){
													maior=b;
													intermediario2=c;
													intermediario1=a;
													menor=d;
												}else{
													if(c>a && c>b && c>d && a>b && a>d && b>d){
														maior=c;
														intermediario2=a;
														intermediario1=b;
														menor=d;
													}else{
														if(c>a && c>d && c>b && a>d && a>b && d>b){
															maior=c;
															intermediario2=a;
															intermediario1=d;
															menor=b;
														}else{
															if(c>d && c>a && c>b && d>a && d>b && a>b){
																maior=c;
																intermediario2=d;
																intermediario1=a;
																menor=b;
															}else{
																if(c>d && c>b && c>a && d>b && d>a && b>a){
																	maior=c;
																	intermediario2=d;
																	intermediario1=b;
																	menor=a;
																}else{
																	if(c>b && c>d && c>a && b>d && b>a && d>a){
																		maior=c;
																		intermediario2=b;
																		intermediario1=d;
																		menor=a;
																	}else{
																		if(c>b && c>a && c>d && b>a && b>d && a>d){
																			maior=c;
																			intermediario2=b;
																			intermediario1=a;
																			menor=d;
																		}else{
																			if(d>a && d>b && d>c && a>b && a>c && b>c){
																				maior=d;
																				intermediario2=a;
																				intermediario1=b;
																				menor=c;
																			}else{
																				if(d>a && d>c && d>b && a>c && a>b && c>b){
																					maior=d;
																					intermediario2=a;
																					intermediario1=c;
																					menor=b;
																				}else{
																					if(d>b && d>a && d>c && b>a && b>c && a>c){
																						maior=d;
																						intermediario2=b;
																						intermediario1=a;
																						menor=c;
																					}else{
																						if(d>b && d>c && d>a && b>c && b>a && c>a){
																							maior=d;
																							intermediario2=b;
																							intermediario1=c;
																							menor=a;
																						}else{
																							if(d>c && d>a && d>b && c>a && c>b && a>b){
																								maior=d;
																								intermediario2=c;
																								intermediario1=a;
																								menor=b;
																							}else{
																								if(d>c && d>b && d>a && c>b && c>a && b>a){
																									maior=d;
																									intermediario2=c;
																									intermediario1=b;
																									menor=a;
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
	
	if(maior==0 && intermediario2==0 && intermediario1==0 && menor==0){
		printf("Algum dos números são iguais\n");
	}else{
		printf("Números em ordem crescente: %d, %d, %d, %d\n\n",menor,intermediario1,intermediario2,maior);
	}
	
	system("pause");
	return 0;
}
