#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int area;
	 cout<< "Escribe el numero del lado del cuadrado"<<endl;
	 cin>>area;

	 if(area==1)
	 {
		 cout<<"*";
	 }
	 else
	 if(area==2)
	 {
		 while(area>0)
		 {
			 cout<<"**"<<endl;
			 --area;
		 }
	 }
		else
		{
			if(area==3)
			{
				area-=2;
				cout<< "***"<<endl;
				while(area>0)
				{
					cout <<"* *"<<endl;
					--area;
				}
				cout<<"***"<<endl;	
			}
				else
				{
					if(area==4)
					{
						area-=2;
						cout<< "****"<<endl;
						while(area>0)
						{
							cout <<"*  *"<<endl;
							--area;
						}
						cout<<"****"<<endl;	
					}
						else
						{
							if(area==5)
							{
								area-=2;
								cout<< "*****"<<endl;
								while(area>0)
								{
									cout <<"*   *"<<endl;
									--area;
								}
								cout<<"*****"<<endl;								
							}
								else
								{
									if(area==6)
									{
										area-=2;
										cout<< "******"<<endl;
										while(area>0)
										{
											cout <<"*    *"<<endl;
											--area;
										}
										cout<<"******"<<endl;										
									}
											else
											{
												if(area==7)
												{
													area-=2;
													cout<< "*******"<<endl;
													while(area>0)
													{
														cout <<"*     *"<<endl;
														--area;
													}
													cout<<"*******"<<endl;													
												}
													else
													{
														if(area==8)
														{
															area-=2;
															cout<< "********"<<endl;
															while(area>0)
															{
																cout <<"*      *"<<endl;
																--area;
															}
															cout<<"********"<<endl;															
														}
															else
															{
																if(area==9)
																{
																	area-=2;
																	cout<< "*********"<<endl;
																	while(area>0)
																	{
																		cout <<"*       *"<<endl;
																		--area;
																	}
																	cout<<"*********"<<endl;																	
																}
																	else
																	{
																		if(area==10)
																		{
																			area-=2;
																			cout<< "**********"<<endl;
																			while(area>0)
																			{
																				cout <<"*        *"<<endl;
																				--area;
																			}
																			cout<<"**********"<<endl;																			
																		}
																			else
																			{
																				if(area==11)
																				{
																					area-=2;
																					cout<< "***********"<<endl;
																					while(area>0)
																					{
																						cout <<"*         *"<<endl;
																						--area;
																					}
																					cout<<"***********"<<endl;
																				}
																					else
																					{
																						if(area==12)
																						{
																							area-=2;
																							cout<< "************"<<endl;
																							while(area>0)
																							{
																								cout <<"*          *"<<endl;
																								--area;
																							}
																							cout<<"************"<<endl;
																						}
																							else
																							{
																								if(area==13)
																								{
																									area-=2;
																									cout<< "*************"<<endl;
																									while(area>0)
																									{
																										cout <<"*           *"<<endl;
																										--area;
																									}
																									cout<<"*************"<<endl;
																								}
																									else
																									{
																										if(area==14)
																										{
																											area-=2;
																											cout<< "**************"<<endl;
																											while(area>0)
																											{
																												cout <<"*            *"<<endl;
																												--area;
																											}
																											cout<<"**************"<<endl;
																										}
																											else
																											{
																												if(area==15)
																												{
																													area-=2;
																													cout<< "***************"<<endl;
																													while(area>0)
																													{
																														cout <<"*             *"<<endl;
																														--area;
																													}
																													cout<<"***************"<<endl;
																												}
																													else
																													{
																														if(area==16)
																														{
																															area-=2;
																															cout<<"****************"<<endl;
																															while(area>0)
																															{
																																cout <<"*              *"<<endl;
																																--area;
																															}
																															cout<<"****************"<<endl;
																														}
																															else
																															{
																																if(area==17)
																																{
																																	area-=2;
																																	cout<<"*****************"<<endl;
																																	while(area>0)
																																	{
																																		cout <<"*               *"<<endl;
																																		--area;
																																	}
																																	cout<<"*****************"<<endl;
																																}
																																	else
																																	{
																																		if(area==18)
																																		{
																																			area-=2;
																																			cout<<"******************"<<endl;
																																			while(area>0)
																																			{
																																				cout <<"*                *"<<endl;
																																				--area;
																																			}
																																			cout<<"******************"<<endl;
																																		}
																																			else
																																			{
																																				if(area==19)
																																				{
																																					area-=2;
																																					cout<<"*******************"<<endl;
																																					while(area>0)
																																					{
																																						cout <<"*                 *"<<endl;
																																						--area;
																																					}
																																					cout<<"*******************"<<endl;
																																				}
																																					else
																																					{
																																						if(area==20)
																																						{
																																							area-=2;
																																							cout<<"********************"<<endl;
																																							while(area>0)
																																							{
																																								cout <<"*                  *"<<endl;
																																								--area;
																																							}
																																							cout<<"********************"<<endl;														
																																						}
																																							else
																																							{
																																								cout<<"Solo se puede del 1 al 20. Sorry, dude"<<endl;
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
	
	return 0;
}