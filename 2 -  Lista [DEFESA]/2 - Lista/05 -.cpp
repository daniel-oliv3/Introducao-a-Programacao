#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// 5. Criar um algoritmo para ler a sigla de um estado de uma pessoa e imprimir uma das mensagens:
//- Carioca; - Paulista; - Amazonense; - Pernambucano; - Baiano; - Outros estados.

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char x[5]; 
	
	printf("SIGLAS \n\n");
	printf("AC - AL - AP - AM  \nBA - CE - DF - ES  \nGO - MA - MT - MS  \nMG - PA - PB - PR  \nPE - PI - RJ - RN  \nRS - RO - RR - SC  \nSP - SE - TO - []\n\n");
	printf("Informe a Sigla de um estado brasileiro: \n");
	//gets(x);
	scanf("%s",&x);
	if(!strcmp(x, "ac") || !strcmp(x, "AC")){
		printf("Estado: Acre (acreano, acriano)\n");
	}else{
		if(!strcmp(x, "al") || !strcmp(x, "AL")){
			printf("Estado: Alagoas (alagoano, alagoense)\n");
		}else{
			if(!strcmp(x, "ap") || !strcmp(x, "AP")){
				printf("Estado: Amapá (amapaense)\n");
		}else{
			if(!strcmp(x, "am") || !strcmp(x, "AM")){
				printf("Estado: Amazonas (amazonense, baré)\n");
		}else{
			if(!strcmp(x, "ba") || !strcmp(x, "BA")){
				printf("Estado: Bahia (baiano, baiense)\n");
			}else{
				if(!strcmp(x, "ce") || !strcmp(x, "CE")){
					printf("Estado: Ceará (cearense)\n");	
				}else{
					if(!strcmp(x, "df") || !strcmp(x, "DF")){
						printf("Estado: Distrito Federal (brasiliense, candango)\n");
					}else{
						if(!strcmp(x, "es") || !strcmp(x, "ES")){
							printf("Estado: Espírito Santo (capixaba, espírito-santense)\n");
						}else{
							if(!strcmp(x, "go") || !strcmp(x, "GO")){
								printf("Estado: Goiás (goiano)\n");
							}else{
								if(!strcmp(x, "ma") || !strcmp(x, "MA")){
									printf("Estado: Maranhão (maranhense, maranhão)\n");
								}else{
									if(!strcmp(x, "mt") || !strcmp(x, "MT")){
										printf("Estado: Mato Grosso (mato-grossense)\n");
									}else{
										if(!strcmp(x, "ms") || !strcmp(x, "MS")){
											printf("Estado: Mato Grosso do Sul (mato-grossense-do-sul, sul-mato-grossense)\n");
										}else{
											if(!strcmp(x, "mg") || !strcmp(x, "MG")){
												printf("Estado: Minas Gerais (mineiro, montanhês, geralista)\n");
											}else{
												if(!strcmp(x, "pa") || !strcmp(x, "PA")){
													printf("Estado: Pará (paraense, paroara, parauara)\n");
												}else{
													if(!strcmp(x, "pb") || !strcmp(x, "PB")){
														printf("Estado: Paraíba (paraibano)\n");
													}else{
														if(!strcmp(x, "pr") || !strcmp(x, "PR")){
															printf("Estado: Paraná (paranaense, paranista)\n");
														}else{
															if(!strcmp(x, "pe") || !strcmp(x, "PE")){
																printf("Estado: Pernambuco (pernambucano)\n");
															}else{
																if(!strcmp(x, "pi") || !strcmp(x, "PI")){
																	printf("Estado: Piauí (piauiense)\n");
																}else{
																	if(!strcmp(x, "rj") || !strcmp(x, "RJ")){
																		printf("Estado: Rio de Janeiro (carioca, fluminense)\n");
																	}else{
																		if(!strcmp(x, "rn") || !strcmp(x, "RN")){
																			printf("Estado: Rio Grande do Norte (potiguar, rio-grandense-do-norte, norte-rio-grandense, petiguar, pitaguar, pitiguar, pitiguara, potiguara)\n");
																		}else{
																			if(!strcmp(x, "rs") || !strcmp(x, "RS")){
																				printf("Estado: Rio Grande do Sul (gaúcho, rio-grandense-do-sul)\n");
																			}else{
																				if(!strcmp(x, "ro") || !strcmp(x, "RO")){
																					printf("Estado: Rondônia (rondoniense, rondoniano)\n");
																				}else{
																					if(!strcmp(x, "rr") || !strcmp(x, "RR")){
																						printf("Estado: Roraima (roraimense)\n");
																					}else{
																						if(!strcmp(x, "sc") || !strcmp(x, "SC")){
																							printf("Estado: Santa Catarina (catarinense, barriga-verde)\n");
																						}else{
																							if(!strcmp(x, "sp") || !strcmp(x, "SP")){
																								printf("Estado: São Paulo (paulista, bandeirante)\n");
																							}else{
																								if(!strcmp(x, "se") || !strcmp(x, "SE")){
																									printf("Estado: Sergipe (sergipano, sergipense)\n");
																								}else{
																									if(!strcmp(x, "to") || !strcmp(x, "TO")){
																										printf("Estado: Tocantins (tocantinense)\n");
																									}else
																										printf("Sigla Invalida!\n");
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
}

	system("Pause");
	return 0;
}

