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
	int iLocal_48[4] = { 0, 0, 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54[4] = { 0, 0, 0, 0 };
	int iLocal_59 = 0;
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
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
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
	if (unk_0xC968670BFACE42D9(3))
	{
		func_12();
	}
	iLocal_96 = unk_0xD80958FC74E988A6();
	while (true)
	{
		if (unk_0x5F9532F3B5CC2551(iLocal_96))
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
		if (unk_0x7239B21A38F536BA(iLocal_48[iVar0]))
		{
			if (unk_0xE31C2C72B8692B64(iLocal_48[iVar0]) || (!unk_0x5F9532F3B5CC2551(iLocal_48[iVar0]) && !unk_0x47D6F43D77935C75(iLocal_48[iVar0])))
			{
				unk_0xEA386986E786A54F(&(iLocal_48[iVar0]));
				unk_0x9614299DCB53E54B(&(iLocal_54[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_48[iVar0]), &(iLocal_54[iVar0]));
				unk_0x629BFA74418D6239(&(iLocal_48[iVar0]));
				unk_0x2595DD4236549CE3(&(iLocal_54[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x7239B21A38F536BA(iLocal_53))
	{
		if (unk_0xE31C2C72B8692B64(iLocal_53))
		{
			unk_0xEA386986E786A54F(&iLocal_53);
			unk_0x9614299DCB53E54B(&iLocal_59);
		}
		else
		{
			func_2(&iLocal_53, &iLocal_59);
			unk_0x629BFA74418D6239(&iLocal_53);
			unk_0x2595DD4236549CE3(&iLocal_59);
		}
	}
	if (bLocal_81)
	{
		unk_0xF1160ACCF98A3FC8(101, "AirportJetTakeOff");
		unk_0xF1160ACCF98A3FC8(102, "AirportJetTakeOff");
		unk_0xF1160ACCF98A3FC8(101, "AirportNew");
		unk_0xF1160ACCF98A3FC8(102, "AirportNew");
		unk_0xF1160ACCF98A3FC8(103, "AirplaneLandingRedux");
		unk_0xF1160ACCF98A3FC8(104, "AirplaneLandingRedux");
		unk_0xF1160ACCF98A3FC8(101, "EastWestFlight");
	}
}

void func_2(int iParam0, var uParam1)
{
	if (((unk_0x7239B21A38F536BA(*iParam0) && unk_0x7239B21A38F536BA(*uParam1)) && !unk_0x5F9532F3B5CC2551(*iParam0)) && !unk_0x5F9532F3B5CC2551(*uParam1))
	{
		if (unk_0x886E37EC497200B6(*iParam0))
		{
			if (unk_0x1C8A4C2C19E68EEC(*iParam0))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
				{
					unk_0x23703CD154E83B88(*uParam1, *iParam0, 0, 0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 30f, 100, 50);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_77)
	{
		if (unk_0x7239B21A38F536BA(iLocal_48[0]) && !unk_0x5F9532F3B5CC2551(iLocal_48[0]))
		{
			if (unk_0x886E37EC497200B6(iLocal_48[0]))
			{
				if (!unk_0x1C8A4C2C19E68EEC(iLocal_48[0]))
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_54[0])) && !unk_0x5F9532F3B5CC2551(iLocal_48[0]))
					{
						unk_0x23703CD154E83B88(iLocal_54[0], iLocal_48[0], 0, 0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_54[0])) && !unk_0x5F9532F3B5CC2551(iLocal_48[0]))
					{
						unk_0x23703CD154E83B88(iLocal_54[0], iLocal_48[0], 0, 0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50);
					}
				}
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_48[2]) && !unk_0x5F9532F3B5CC2551(iLocal_48[2]))
		{
			if (unk_0x886E37EC497200B6(iLocal_48[2]))
			{
				if (!unk_0x1C8A4C2C19E68EEC(iLocal_48[2]))
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_54[2])) && !unk_0x5F9532F3B5CC2551(iLocal_48[2]))
					{
						unk_0x23703CD154E83B88(iLocal_54[2], iLocal_48[2], 0, 0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(iLocal_54[2])) && !unk_0x5F9532F3B5CC2551(iLocal_48[2]))
					{
						unk_0x23703CD154E83B88(iLocal_54[2], iLocal_48[2], 0, 0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 8, 50f, -1f, 90f, 100, 50);
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
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if ((unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
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
			unk_0x963D27A58DF860AC(joaat("jet"));
			unk_0x963D27A58DF860AC(iLocal_83);
			unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
			unk_0xAF514CABE74CBF15(103, "AirplaneLandingRedux");
			unk_0xAF514CABE74CBF15(101, "EastWestFlight");
			unk_0xAF514CABE74CBF15(101, "AirportNew");
			unk_0xAF514CABE74CBF15(104, "AirplaneLandingRedux");
			iLocal_87 = 2;
			break;
		
		case 2:
			if (!bLocal_81)
			{
				if ((((((unk_0x98A4EB5D89A0C952(joaat("jet")) && unk_0x98A4EB5D89A0C952(iLocal_83)) && unk_0x300D614A4C785FC4(101, "AirportJetTakeOff")) && unk_0x300D614A4C785FC4(103, "AirplaneLandingRedux")) && unk_0x300D614A4C785FC4(101, "AirportNew")) && unk_0x300D614A4C785FC4(104, "AirplaneLandingRedux")) && unk_0x300D614A4C785FC4(101, "EastWestFlight"))
				{
					bLocal_81 = true;
				}
				else
				{
					unk_0x963D27A58DF860AC(joaat("jet"));
					unk_0x963D27A58DF860AC(iLocal_83);
					unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
					unk_0xAF514CABE74CBF15(102, "AirportJetTakeOff");
					unk_0xAF514CABE74CBF15(101, "AirportNew");
					unk_0xAF514CABE74CBF15(102, "AirportNew");
					unk_0xAF514CABE74CBF15(101, "EastWestFlight");
				}
			}
			if (bLocal_81)
			{
				if (!unk_0xE33D59DA70B58FDF(Local_60[0 /*3*/], 50f) && !unk_0xE33D59DA70B58FDF(Local_73, 50f))
				{
					iLocal_87 = 3;
				}
				else
				{
					if (unk_0xE33D59DA70B58FDF(Local_60[0 /*3*/], 50f))
					{
					}
					if (unk_0xE33D59DA70B58FDF(Local_73, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_48[0] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_60[0 /*3*/], 0, 1, 1);
			unk_0x8E2530AA8ADA980E(iLocal_48[0], 240.3179f);
			unk_0x279D50DE5652D935(iLocal_48[0], false);
			iLocal_48[1] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_60[1 /*3*/], 0, 1, 1);
			unk_0x279D50DE5652D935(iLocal_48[1], false);
			iLocal_48[2] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_60[2 /*3*/], 0, 1, 1);
			unk_0x279D50DE5652D935(iLocal_48[2], false);
			iLocal_48[3] = unk_0xAF35D0D2583051B0(joaat("jet"), Local_60[3 /*3*/], 0, 1, 1);
			unk_0x279D50DE5652D935(iLocal_48[3], false);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0x7239B21A38F536BA(iLocal_48[iVar0]))
				{
					iLocal_54[iVar0] = unk_0x7DD959874C1FD534(iLocal_48[iVar0], 4, iLocal_83, -1, true, true);
					unk_0x5927F96A78577363(iLocal_48[iVar0], 1000);
					unk_0x2497C4717C8B881E(iLocal_48[iVar0], 1, 1);
					unk_0x9F8AA94D6D97DBF4(iLocal_54[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_48[1]), &(iLocal_54[1]));
			func_8(&(iLocal_48[2]), &(iLocal_54[2]));
			func_8(&(iLocal_48[3]), &(iLocal_54[3]));
			if (bLocal_77)
			{
				if (unk_0x7239B21A38F536BA(iLocal_48[0]))
				{
					if (unk_0x300D614A4C785FC4(101, "AirportJetTakeOff"))
					{
						unk_0x7D80FD645D4DA346(iLocal_48[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_76 = 1;
					}
					else
					{
						unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_87 = 4;
			break;
		
		case 4:
			if (iLocal_80)
			{
				if (unk_0x7239B21A38F536BA(iLocal_48[3]) && !unk_0x5F9532F3B5CC2551(iLocal_48[3]))
				{
					if (unk_0xE31C2C72B8692B64(iLocal_48[3]))
					{
						if (!iLocal_78)
						{
							func_8(&(iLocal_48[3]), &(iLocal_54[3]));
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
							if (unk_0x7239B21A38F536BA(iLocal_48[0]) && !unk_0x5F9532F3B5CC2551(iLocal_48[0]))
							{
								if (unk_0xE31C2C72B8692B64(iLocal_48[0]) && !unk_0xE33D59DA70B58FDF(Local_60[0 /*3*/], 50f))
								{
									if (unk_0x300D614A4C785FC4(101, "AirportJetTakeOff"))
									{
										unk_0x7D80FD645D4DA346(iLocal_48[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_76 = 1;
									}
									else
									{
										unk_0xAF514CABE74CBF15(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_76)
					{
						if (unk_0x7239B21A38F536BA(iLocal_48[0]) && !unk_0x5F9532F3B5CC2551(iLocal_48[0]))
						{
							if (unk_0x1C8A4C2C19E68EEC(iLocal_48[0]))
							{
								fLocal_84 = unk_0x2DACD605FC681475(iLocal_48[0]);
							}
						}
						if (fLocal_84 > 1100f)
						{
							iLocal_86 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x7239B21A38F536BA(iLocal_48[1]) && !unk_0x5F9532F3B5CC2551(iLocal_48[1]))
					{
						if (bLocal_77)
						{
							if (unk_0xE31C2C72B8692B64(iLocal_48[1]))
							{
								if (iLocal_80)
								{
									if (iLocal_78)
									{
										func_6(&(iLocal_48[1]), &(iLocal_54[1]));
										if (unk_0x300D614A4C785FC4(103, "AirplaneLandingRedux"))
										{
											unk_0x7D80FD645D4DA346(iLocal_48[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_79 = 0;
											iLocal_86 = 2;
										}
										else
										{
											unk_0xAF514CABE74CBF15(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_48[1]), &(iLocal_54[1]));
									if (unk_0x300D614A4C785FC4(103, "AirplaneLandingRedux"))
									{
										unk_0x7D80FD645D4DA346(iLocal_48[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_79 = 0;
										iLocal_86 = 2;
									}
									else
									{
										unk_0xAF514CABE74CBF15(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x7239B21A38F536BA(iLocal_48[1]) && !unk_0x5F9532F3B5CC2551(iLocal_48[1]))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_48[1]))
						{
							iLocal_86 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0x7239B21A38F536BA(iLocal_48[2]) && !unk_0x5F9532F3B5CC2551(iLocal_48[2]))
					{
						if (unk_0x300D614A4C785FC4(101, "AirportNew"))
						{
							if (!unk_0xE33D59DA70B58FDF(Local_60[2 /*3*/], 50f))
							{
								if (!unk_0x1C8A4C2C19E68EEC(iLocal_48[2]))
								{
									func_6(&(iLocal_48[2]), &(iLocal_54[2]));
									unk_0x3F878F92B3A7A071(iLocal_48[2], 101, "AirportNew", true);
									iLocal_86 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0x7239B21A38F536BA(iLocal_48[2]) && !unk_0x5F9532F3B5CC2551(iLocal_48[2]))
					{
						if (unk_0x1C8A4C2C19E68EEC(iLocal_48[2]))
						{
							fLocal_85 = unk_0x2DACD605FC681475(iLocal_48[2]);
						}
					}
					if (unk_0x7239B21A38F536BA(iLocal_48[1]) && !unk_0x5F9532F3B5CC2551(iLocal_48[1]))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_48[1]))
						{
							if (unk_0xE31C2C72B8692B64(iLocal_48[1]))
							{
								func_8(&(iLocal_48[1]), &(iLocal_54[1]));
								iLocal_79 = 1;
							}
						}
					}
					if (fLocal_85 > 1100f)
					{
						if (unk_0x7239B21A38F536BA(iLocal_48[3]) && !unk_0x5F9532F3B5CC2551(iLocal_48[3]))
						{
							if (unk_0x300D614A4C785FC4(104, "AirplaneLandingRedux"))
							{
								if (!unk_0xE33D59DA70B58FDF(Local_60[3 /*3*/], 50f))
								{
									if (!unk_0x1C8A4C2C19E68EEC(iLocal_48[3]) && iLocal_79)
									{
										func_6(&(iLocal_48[3]), &(iLocal_54[3]));
										unk_0x3F878F92B3A7A071(iLocal_48[3], 104, "AirplaneLandingRedux", true);
										iLocal_86 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x7239B21A38F536BA(iLocal_48[3]) && !unk_0x5F9532F3B5CC2551(iLocal_48[3]))
					{
						if (!unk_0x1C8A4C2C19E68EEC(iLocal_48[3]))
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
	unk_0xEA1C610A04DB6BBB(*uParam0, 1);
	unk_0xEA1C610A04DB6BBB(*uParam1, 1);
	unk_0x1A9205C1B9EE827F(*uParam0, true, false);
	unk_0x428CA6DBD1094446(*uParam0, false);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_82)
	{
		case 0:
			if (!unk_0x7239B21A38F536BA(iLocal_53))
			{
				iLocal_53 = unk_0xAF35D0D2583051B0(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1);
				unk_0x5927F96A78577363(iLocal_53, 1000);
				unk_0x2497C4717C8B881E(iLocal_53, 1, 1);
				unk_0x279D50DE5652D935(iLocal_53, false);
				iLocal_59 = unk_0x7DD959874C1FD534(iLocal_53, 4, iLocal_83, -1, true, true);
				unk_0x9F8AA94D6D97DBF4(iLocal_59, true);
				iLocal_82 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7239B21A38F536BA(iLocal_53) && !unk_0x5F9532F3B5CC2551(iLocal_53))
			{
				if (unk_0x300D614A4C785FC4(101, "EastWestFlight"))
				{
					if (!unk_0x1C8A4C2C19E68EEC(iLocal_53))
					{
						unk_0x7D80FD645D4DA346(iLocal_53, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_82 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			if (unk_0x7239B21A38F536BA(iLocal_53) && !unk_0x5F9532F3B5CC2551(iLocal_53))
			{
				if (!unk_0x1C8A4C2C19E68EEC(iLocal_53))
				{
					if ((unk_0xE31C2C72B8692B64(iLocal_53) && !unk_0xE33D59DA70B58FDF(-1602.086f, -2674.039f, 12.9444f, 50f)) && unk_0xB7A628320EFF8E47(Var0, unk_0x3FEF770D40960D5A(iLocal_53, true)) > 62500f)
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
	unk_0xEA1C610A04DB6BBB(*uParam0, 0);
	unk_0xEA1C610A04DB6BBB(*uParam1, 0);
	unk_0x1A9205C1B9EE827F(*uParam0, false, false);
	unk_0x428CA6DBD1094446(*uParam0, true);
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
	unk_0x1090044AD1DA76FA();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0x7239B21A38F536BA(iLocal_88))
	{
		if (unk_0xE31C2C72B8692B64(iLocal_88))
		{
			unk_0xEA386986E786A54F(&iLocal_88);
		}
		else if (!unk_0x5F9532F3B5CC2551(iLocal_88) && !unk_0x84A2DD9AC37C35C1(iLocal_89))
		{
			unk_0x54833611C17ABDEA(iLocal_88);
			unk_0x971D38760FBC02EF(iLocal_89, true);
			Var0 = { unk_0x3FEF770D40960D5A(iLocal_88, true) };
			fVar9 = unk_0xE83D4F9BA2A38914(iLocal_88);
			Var3 = { 0f, 500f, 50f };
			Var6 = { unk_0x163E252DE035A133(Var0, fVar9, Var3) };
			unk_0xDAD029E187A2BEB4(iLocal_89, iLocal_88, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_94)
	{
		unk_0xF1160ACCF98A3FC8(102, "HelicopterTakeOff");
	}
}

