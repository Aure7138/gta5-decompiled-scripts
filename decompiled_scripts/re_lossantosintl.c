#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48[4] = { 0, 0, 0, 0 };
	var uLocal_53 = 0;
	var uLocal_54[4] = { 0, 0, 0, 0 };
	var uLocal_59 = 0;
	struct<3> Local_60[4];
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	bLocal_77 = true;
	iLocal_83 = joaat("s_m_m_pilot_01");
	iLocal_98 = 500;
	if (unk_0x7547D7CF93115D6D(3))
	{
		func_12();
	}
	uLocal_96 = unk_0x507DA4994C3D8EBD();
	while (true)
	{
		if (unk_0xE5D56342B0FF1D0D(uLocal_96))
		{
			iLocal_97 = 5;
		}
		switch (iLocal_97)
		{
			case 0:
				iLocal_97 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_97 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_97 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_97 = 4;
				break;
			
			case 4:
				if (Global_87117)
				{
					iLocal_97 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		unk_0x4EDE34FBADD967A6(iLocal_98);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFD68187442384158(uLocal_48[iVar0]))
		{
			if (unk_0x19F2D2C58150C825(uLocal_48[iVar0]) || (!unk_0xE5D56342B0FF1D0D(uLocal_48[iVar0]) && !unk_0xDAB2315B565377E3(uLocal_48[iVar0])))
			{
				unk_0x10EA498723DC5A09(&(uLocal_48[iVar0]));
				unk_0x8019BB3BA236A900(&(uLocal_54[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(uLocal_48[iVar0]), &(uLocal_54[iVar0]));
				unk_0xB67623A401171555(&(uLocal_48[iVar0]));
				unk_0xCA4DD92F1F2931F3(&(uLocal_54[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xFD68187442384158(uLocal_53))
	{
		if (unk_0x19F2D2C58150C825(uLocal_53))
		{
			unk_0x10EA498723DC5A09(&uLocal_53);
			unk_0x8019BB3BA236A900(&uLocal_59);
		}
		else
		{
			func_2(&uLocal_53, &uLocal_59);
			unk_0xB67623A401171555(&uLocal_53);
			unk_0xCA4DD92F1F2931F3(&uLocal_59);
		}
	}
	if (bLocal_81)
	{
		unk_0x6F50999A7C4DD6A2(101, "AirportJetTakeOff");
		unk_0x6F50999A7C4DD6A2(102, "AirportJetTakeOff");
		unk_0x6F50999A7C4DD6A2(101, "AirportNew");
		unk_0x6F50999A7C4DD6A2(102, "AirportNew");
		unk_0x6F50999A7C4DD6A2(103, "AirplaneLandingRedux");
		unk_0x6F50999A7C4DD6A2(104, "AirplaneLandingRedux");
		unk_0x6F50999A7C4DD6A2(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1)
{
	if (((unk_0xFD68187442384158(*uParam0) && unk_0xFD68187442384158(*uParam1)) && !unk_0xE5D56342B0FF1D0D(*uParam0)) && !unk_0xE5D56342B0FF1D0D(*uParam1))
	{
		if (unk_0xF97DDB74A78F6500(*uParam0))
		{
			if (unk_0x8B3A54875054E60A(*uParam0))
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					unk_0x8276BF488762405A(*uParam1, *uParam0, 0, 0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8, 50f, -1f, 30f, 100, 50);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_77)
	{
		if (unk_0xFD68187442384158(uLocal_48[0]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[0]))
		{
			if (unk_0xF97DDB74A78F6500(uLocal_48[0]))
			{
				if (!unk_0x8B3A54875054E60A(uLocal_48[0]))
				{
					if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(uLocal_54[0])) && !unk_0xE5D56342B0FF1D0D(uLocal_48[0]))
					{
						unk_0x8276BF488762405A(uLocal_54[0], uLocal_48[0], 0, 0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(uLocal_54[0])) && !unk_0xE5D56342B0FF1D0D(uLocal_48[0]))
					{
						unk_0x8276BF488762405A(uLocal_54[0], uLocal_48[0], 0, 0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
			}
		}
		if (unk_0xFD68187442384158(uLocal_48[2]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[2]))
		{
			if (unk_0xF97DDB74A78F6500(uLocal_48[2]))
			{
				if (!unk_0x8B3A54875054E60A(uLocal_48[2]))
				{
					if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(uLocal_54[2])) && !unk_0xE5D56342B0FF1D0D(uLocal_48[2]))
					{
						unk_0x8276BF488762405A(uLocal_54[2], uLocal_48[2], 0, 0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(uLocal_54[2])) && !unk_0xE5D56342B0FF1D0D(uLocal_48[2]))
					{
						unk_0x8276BF488762405A(uLocal_54[2], uLocal_48[2], 0, 0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_87)
	{
		case 0:
			Local_60[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_60[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_60[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_60[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_73 = { -1612.174f, -2688.442f, 12.9444f };
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if ((unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()) || unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD())) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
				{
					bLocal_77 = false;
				}
				else
				{
					bLocal_77 = true;
				}
			}
			iLocal_87 = 1;
			break;
		
		case 1:
			unk_0xCBE6AC5010E5CE5C(joaat("jet"));
			unk_0xCBE6AC5010E5CE5C(iLocal_83);
			unk_0x27859D80F345E855(101, "AirportJetTakeOff");
			unk_0x27859D80F345E855(103, "AirplaneLandingRedux");
			unk_0x27859D80F345E855(101, "EastWestFlight");
			unk_0x27859D80F345E855(101, "AirportNew");
			unk_0x27859D80F345E855(104, "AirplaneLandingRedux");
			iLocal_87 = 2;
			break;
		
		case 2:
			if (!bLocal_81)
			{
				if ((((((unk_0xD291857D0C9C7FEC(joaat("jet")) && unk_0xD291857D0C9C7FEC(iLocal_83)) && unk_0xD3536FF14115DA03(101, "AirportJetTakeOff")) && unk_0xD3536FF14115DA03(103, "AirplaneLandingRedux")) && unk_0xD3536FF14115DA03(101, "AirportNew")) && unk_0xD3536FF14115DA03(104, "AirplaneLandingRedux")) && unk_0xD3536FF14115DA03(101, "EastWestFlight"))
				{
					bLocal_81 = true;
				}
				else
				{
					unk_0xCBE6AC5010E5CE5C(joaat("jet"));
					unk_0xCBE6AC5010E5CE5C(iLocal_83);
					unk_0x27859D80F345E855(101, "AirportJetTakeOff");
					unk_0x27859D80F345E855(102, "AirportJetTakeOff");
					unk_0x27859D80F345E855(101, "AirportNew");
					unk_0x27859D80F345E855(102, "AirportNew");
					unk_0x27859D80F345E855(101, "EastWestFlight");
				}
			}
			if (bLocal_81)
			{
				if (!unk_0x23A9305227426F8B(Local_60[0 /*3*/], 50f) && !unk_0x23A9305227426F8B(Local_73, 50f))
				{
					iLocal_87 = 3;
				}
				else
				{
					if (unk_0x23A9305227426F8B(Local_60[0 /*3*/], 50f))
					{
					}
					if (unk_0x23A9305227426F8B(Local_73, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_48[0] = unk_0x546974B676313326(joaat("jet"), Local_60[0 /*3*/], 0, 1, 1);
			unk_0x248DC16118AE5035(uLocal_48[0], 240.3179f);
			unk_0x960956EA6A951627(uLocal_48[0], 0);
			uLocal_48[1] = unk_0x546974B676313326(joaat("jet"), Local_60[1 /*3*/], 0, 1, 1);
			unk_0x960956EA6A951627(uLocal_48[1], 0);
			uLocal_48[2] = unk_0x546974B676313326(joaat("jet"), Local_60[2 /*3*/], 0, 1, 1);
			unk_0x960956EA6A951627(uLocal_48[2], 0);
			uLocal_48[3] = unk_0x546974B676313326(joaat("jet"), Local_60[3 /*3*/], 0, 1, 1);
			unk_0x960956EA6A951627(uLocal_48[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0xFD68187442384158(uLocal_48[iVar0]))
				{
					uLocal_54[iVar0] = unk_0xC68FBD37098CE438(uLocal_48[iVar0], 4, iLocal_83, -1, 1, 1);
					unk_0x94A4D627D865396B(uLocal_48[iVar0], 1000);
					unk_0xE0E038A4E5C7727B(uLocal_48[iVar0], 1, 1);
					unk_0x2DC5B31EBB810396(uLocal_54[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_48[1]), &(uLocal_54[1]));
			func_8(&(uLocal_48[2]), &(uLocal_54[2]));
			func_8(&(uLocal_48[3]), &(uLocal_54[3]));
			if (bLocal_77)
			{
				if (unk_0xFD68187442384158(uLocal_48[0]))
				{
					if (unk_0xD3536FF14115DA03(101, "AirportJetTakeOff"))
					{
						unk_0xC3835F187A1E9DF2(uLocal_48[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_76 = 1;
					}
					else
					{
						unk_0x27859D80F345E855(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_87 = 4;
			break;
		
		case 4:
			if (iLocal_80)
			{
				if (unk_0xFD68187442384158(uLocal_48[3]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[3]))
				{
					if (unk_0x19F2D2C58150C825(uLocal_48[3]))
					{
						if (!iLocal_78)
						{
							func_8(&(uLocal_48[3]), &(uLocal_54[3]));
							iLocal_78 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_86)
			{
				case 0:
					if (!iLocal_76)
					{
						if (bLocal_77)
						{
							if (unk_0xFD68187442384158(uLocal_48[0]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[0]))
							{
								if (unk_0x19F2D2C58150C825(uLocal_48[0]) && !unk_0x23A9305227426F8B(Local_60[0 /*3*/], 50f))
								{
									if (unk_0xD3536FF14115DA03(101, "AirportJetTakeOff"))
									{
										unk_0xC3835F187A1E9DF2(uLocal_48[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_76 = 1;
									}
									else
									{
										unk_0x27859D80F345E855(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_76)
					{
						if (unk_0xFD68187442384158(uLocal_48[0]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[0]))
						{
							if (unk_0x8B3A54875054E60A(uLocal_48[0]))
							{
								fLocal_84 = unk_0xAF35F387BDE86320(uLocal_48[0]);
							}
						}
						if (fLocal_84 > 1100f)
						{
							iLocal_86 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0xFD68187442384158(uLocal_48[1]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[1]))
					{
						if (bLocal_77)
						{
							if (unk_0x19F2D2C58150C825(uLocal_48[1]))
							{
								if (iLocal_80)
								{
									if (iLocal_78)
									{
										func_6(&(uLocal_48[1]), &(uLocal_54[1]));
										if (unk_0xD3536FF14115DA03(103, "AirplaneLandingRedux"))
										{
											unk_0xC3835F187A1E9DF2(uLocal_48[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_79 = 0;
											iLocal_86 = 2;
										}
										else
										{
											unk_0x27859D80F345E855(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_48[1]), &(uLocal_54[1]));
									if (unk_0xD3536FF14115DA03(103, "AirplaneLandingRedux"))
									{
										unk_0xC3835F187A1E9DF2(uLocal_48[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_79 = 0;
										iLocal_86 = 2;
									}
									else
									{
										unk_0x27859D80F345E855(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xFD68187442384158(uLocal_48[1]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[1]))
					{
						if (!unk_0x8B3A54875054E60A(uLocal_48[1]))
						{
							iLocal_86 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0xFD68187442384158(uLocal_48[2]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[2]))
					{
						if (unk_0xD3536FF14115DA03(101, "AirportNew"))
						{
							if (!unk_0x23A9305227426F8B(Local_60[2 /*3*/], 50f))
							{
								if (!unk_0x8B3A54875054E60A(uLocal_48[2]))
								{
									func_6(&(uLocal_48[2]), &(uLocal_54[2]));
									unk_0xFB79A537A7D76B64(uLocal_48[2], 101, "AirportNew", 1);
									iLocal_86 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0xFD68187442384158(uLocal_48[2]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[2]))
					{
						if (unk_0x8B3A54875054E60A(uLocal_48[2]))
						{
							fLocal_85 = unk_0xAF35F387BDE86320(uLocal_48[2]);
						}
					}
					if (unk_0xFD68187442384158(uLocal_48[1]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[1]))
					{
						if (!unk_0x8B3A54875054E60A(uLocal_48[1]))
						{
							if (unk_0x19F2D2C58150C825(uLocal_48[1]))
							{
								func_8(&(uLocal_48[1]), &(uLocal_54[1]));
								iLocal_79 = 1;
							}
						}
					}
					if (fLocal_85 > 1100f)
					{
						if (unk_0xFD68187442384158(uLocal_48[3]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[3]))
						{
							if (unk_0xD3536FF14115DA03(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x23A9305227426F8B(Local_60[3 /*3*/], 50f))
								{
									if (!unk_0x8B3A54875054E60A(uLocal_48[3]) && iLocal_79)
									{
										func_6(&(uLocal_48[3]), &(uLocal_54[3]));
										unk_0xFB79A537A7D76B64(uLocal_48[3], 104, "AirplaneLandingRedux", 1);
										iLocal_86 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xFD68187442384158(uLocal_48[3]) && !unk_0xE5D56342B0FF1D0D(uLocal_48[3]))
					{
						if (!unk_0x8B3A54875054E60A(uLocal_48[3]))
						{
							func_5();
							iLocal_86 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_84 = 0f;
	iLocal_76 = 0;
	iLocal_80 = 1;
	iLocal_78 = 0;
}

void func_6(var uParam0, var uParam1)
{
	unk_0x07E0AE075425AA06(*uParam0, 1);
	unk_0x07E0AE075425AA06(*uParam1, 1);
	unk_0xCC8C6873CFB069A4(*uParam0, 1, 0);
	unk_0x479E7EEEBDEE245D(*uParam0, 0);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_82)
	{
		case 0:
			if (!unk_0xFD68187442384158(uLocal_53))
			{
				uLocal_53 = unk_0x546974B676313326(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1);
				unk_0x94A4D627D865396B(uLocal_53, 1000);
				unk_0xE0E038A4E5C7727B(uLocal_53, 1, 1);
				unk_0x960956EA6A951627(uLocal_53, 0);
				uLocal_59 = unk_0xC68FBD37098CE438(uLocal_53, 4, iLocal_83, -1, 1, 1);
				unk_0x2DC5B31EBB810396(uLocal_59, 1);
				iLocal_82 = 1;
			}
			break;
		
		case 1:
			if (unk_0xFD68187442384158(uLocal_53) && !unk_0xE5D56342B0FF1D0D(uLocal_53))
			{
				if (unk_0xD3536FF14115DA03(101, "EastWestFlight"))
				{
					if (!unk_0x8B3A54875054E60A(uLocal_53))
					{
						unk_0xC3835F187A1E9DF2(uLocal_53, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_82 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			}
			if (unk_0xFD68187442384158(uLocal_53) && !unk_0xE5D56342B0FF1D0D(uLocal_53))
			{
				if (!unk_0x8B3A54875054E60A(uLocal_53))
				{
					if ((unk_0x19F2D2C58150C825(uLocal_53) && !unk_0x23A9305227426F8B(-1602.086f, -2674.039f, 12.9444f, 50f)) && unk_0xB7A628320EFF8E47(Var0, unk_0xBF1B13057E5119A4(uLocal_53, 1)) > 62500f)
					{
						iLocal_82 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	unk_0x07E0AE075425AA06(*uParam0, 0);
	unk_0x07E0AE075425AA06(*uParam1, 0);
	unk_0xCC8C6873CFB069A4(*uParam0, 0, 0);
	unk_0x479E7EEEBDEE245D(*uParam0, 1);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	unk_0x883793591E631A3B();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (unk_0xFD68187442384158(uLocal_88))
	{
		if (unk_0x19F2D2C58150C825(uLocal_88))
		{
			unk_0x10EA498723DC5A09(&uLocal_88);
		}
		else if (!unk_0xE5D56342B0FF1D0D(uLocal_88) && !unk_0x9F94F2CFDCA78C55(uLocal_89))
		{
			unk_0xA4DCD8636424FF17(uLocal_88);
			unk_0xA1E4BA3B17C6D931(uLocal_89, 1);
			Var0 = { unk_0xBF1B13057E5119A4(uLocal_88, 1) };
			uVar9 = unk_0xA9D6B28E708753B6(uLocal_88);
			Var3 = { 0f, 500f, 50f };
			Var6 = { unk_0xDA0070A0FA486D72(Var0, uVar9, Var3) };
			unk_0x59DFC08A31F08D05(uLocal_89, uLocal_88, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_94)
	{
		unk_0x6F50999A7C4DD6A2(102, "HelicopterTakeOff");
	}
}

