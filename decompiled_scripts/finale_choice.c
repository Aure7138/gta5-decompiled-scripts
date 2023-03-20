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
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	iLocal_27 = 1;
	if (unk_0xC968670BFACE42D9(18))
	{
		func_35();
	}
	func_34(20);
	func_33();
	func_32(1);
	func_32(0);
	func_32(2);
	func_32(13);
	func_32(12);
	Global_2268 = 1;
	func_31();
	if (!func_30(-1615086084))
	{
		func_29(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_30(-1970925435))
	{
		func_29(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_30(-1817481777))
	{
		func_29(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_28(23) && !func_27(134))
	{
		if (func_23() == 1)
		{
			if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if ((!unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6()) && !unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6())) && !unk_0x28D3FED7190D3A0B(unk_0xD80958FC74E988A6()))
					{
						if (!bVar0)
						{
							if (!((func_22() || unk_0xD9D2CFFF49FAB35F()) || func_21()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_27)
							{
								unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 384);
								unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), 0f);
								unk_0x351220255D64C155(0, 173, true);
								unk_0x351220255D64C155(0, 172, true);
								unk_0x351220255D64C155(0, 174, true);
								unk_0x351220255D64C155(0, 175, true);
								unk_0x351220255D64C155(0, 176, true);
								unk_0x351220255D64C155(0, 177, true);
								unk_0x351220255D64C155(0, 178, true);
								unk_0x351220255D64C155(0, 179, true);
								unk_0x351220255D64C155(0, 180, true);
								unk_0x351220255D64C155(0, 181, true);
							}
							else
							{
								unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_30(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									unk_0xB3271D7AB655B441(joaat("sp_final_decision"), 2, true);
									break;
								
								case -1970925435:
									if (!func_30(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									unk_0xB3271D7AB655B441(joaat("sp_final_decision"), 1, true);
									break;
								
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									unk_0xB3271D7AB655B441(joaat("sp_final_decision"), 3, true);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_27)
									{
										if (func_4())
										{
											iLocal_27 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_3(20);
	Global_89823 = 0;
	func_1();
	func_35();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_200[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_200[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_97173.f_5944.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_97173.f_5944.f_881 == Var0.f_0)
		{
			Global_97173.f_5944.f_881 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0x933D6A9EEC1BACD0(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 0);
		unk_0xE80492A9AC099A93(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 10);
		}
		Global_97173.f_5944[Global_97173.f_5944.f_136 /*15*/] = { Var0 };
		Global_97173.f_5944.f_136++;
		func_9(iParam2);
		return 1;
	}
	return 0;
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97173.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97173.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97173.f_5944.f_764)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97173.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97173.f_5944.f_889[iParam0] = iVar1;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_12()
{
	return Global_97173.f_5944.f_881;
}

int func_13()
{
	unk_0x933D6A9EEC1BACD0(&Global_2264, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_68067)
	{
		if (iParam0 != 17 && iParam0 != 3)
		{
			return 0;
		}
		if (!unk_0xA921AA820C25702F(Global_2543537, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x933D6A9EEC1BACD0(&Global_2543537, 14);
				unk_0x933D6A9EEC1BACD0(&Global_2543537, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x933D6A9EEC1BACD0(&Global_2543537, 14);
				unk_0x933D6A9EEC1BACD0(&Global_2543537, 15);
			}
		}
		if (unk_0x2C83A9DA6BFFC4F9(Global_2270[iParam0 /*15*/].f_9) > 0)
		{
			unk_0xE80492A9AC099A93(&Global_2543537, 14);
			unk_0xE80492A9AC099A93(&Global_2543537, 16);
			unk_0xE80492A9AC099A93(&Global_2543537, 15);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_14393.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14359 == 1)
	{
		return 0;
	}
	if (Global_14393.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x46E9AE36D8FA6417(Global_14390))
	{
		if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14393.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
				{
					Global_14390 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0xC90D2DCACD56184C("cellphone_flashhand");
			}
		}
	}
	while (!Global_14375)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_17();
	func_15();
	if (unk_0x2C83A9DA6BFFC4F9(Global_2270[iParam0 /*15*/].f_9) == 0)
	{
		Global_2869 = 0;
		Global_14393.f_1 = 7;
		func_18(&(Global_2270[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x2C83A9DA6BFFC4F9(Global_2270[iParam0 /*15*/].f_9) == 0)
			{
				Global_14391 = unk_0xE81651AD79516E48(&(Global_2270[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (unk_0x2C83A9DA6BFFC4F9(Global_2270[iParam0 /*15*/].f_9) == 0)
		{
			Global_14391 = unk_0xE81651AD79516E48(&(Global_2270[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xC90D2DCACD56184C(&(Global_2270[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_68067 == 0)
	{
		Global_2270[14 /*15*/].f_4 = -99;
		Global_2270[4 /*15*/].f_4 = -99;
		if (Global_2434967)
		{
			func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2270[iParam0 /*15*/]), sParam1, 16);
	Global_2270[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2270[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2270[iParam0 /*15*/].f_9 = unk_0xD24D37CC275948CC(sParam3);
	Global_2270[iParam0 /*15*/].f_10 = iParam4;
	Global_2270[iParam0 /*15*/].f_11 = iParam5;
	Global_2270[iParam0 /*15*/].f_12 = iParam6;
	Global_2270[iParam0 /*15*/].f_13 = iParam7;
	Global_2270[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2270[iParam0 /*15*/].f_12 == 0)
	{
		Global_2270[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2270[iParam0 /*15*/].f_13 == 0)
	{
		Global_2270[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2270[iParam0 /*15*/].f_14 == 0)
	{
		Global_2270[iParam0 /*15*/].f_14 = 0;
	}
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2270[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_68067 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_97173.f_29699[iVar2 /*29*/].f_19[Global_14393] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_34909 == 15 && func_2(0) == 0) && Global_2268 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14554 = 0;
			Global_2269 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14554 = 1;
			Global_2269 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_97173.f_12272.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_97173.f_12272.f_88 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0xA921AA820C25702F(Global_2543537, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0xA921AA820C25702F(Global_2543537, 4) == 1)
		{
			if (Global_1573284)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
		}
	}
}

void func_18(char* sParam0)
{
	unk_0x6EB5F71AA68F2E8E(sParam0);
	while (!unk_0xE6CC9F3BA0FB9EF1(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_19()
{
	if (func_20(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_23();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_20(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_21()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_22()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23()
{
	func_24();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_26(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_25(unk_0xD80958FC74E988A6());
			if (func_10(iVar0) && (!func_20(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_10(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

int func_28(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

int func_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam2 < 3)
	{
		if (unk_0xA921AA820C25702F(iParam1, iParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_97173.f_5944.f_650 < 30)
	{
		Var0.f_0 = iParam0;
		if (Global_97173.f_5944.f_881 == Var0.f_0)
		{
			Global_97173.f_5944.f_881 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 0);
		unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 6);
		Global_97173.f_5944.f_199[Global_97173.f_5944.f_650 /*15*/] = { Var0 };
		Global_97173.f_5944.f_650++;
		return 1;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (Global_97173.f_5944[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_650)
	{
		if (Global_97173.f_5944.f_199[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_198)
	{
		if (Global_97173.f_5944.f_137[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_764)
	{
		if (Global_97173.f_5944.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_836)
	{
		if (Global_97173.f_5944.f_765[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_31()
{
	Global_89823 = 1;
}

void func_32(int iParam0)
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 147) || iParam0 == 148)
	{
		return;
	}
	Global_35461[iParam0] = unk_0x9CD27B0045628463();
}

void func_33()
{
	Global_35460 = unk_0x9CD27B0045628463();
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
	return 1;
}

void func_35()
{
	func_36(-1615086084);
	func_36(-1989308064);
	func_36(-1970925435);
	func_36(-1060930305);
	func_36(-1817481777);
	Global_2268 = 0;
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	unk_0x1090044AD1DA76FA();
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (Global_97173.f_5944[iVar0 /*15*/] == iParam0)
		{
			if (Global_35456 != iVar0)
			{
				func_43(iVar0);
				func_40(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_198)
	{
		if (Global_97173.f_5944.f_137[iVar0 /*15*/] == iParam0)
		{
			func_40(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_650)
	{
		if (Global_97173.f_5944.f_199[iVar0 /*15*/] == iParam0)
		{
			func_39(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_764)
	{
		if (Global_97173.f_5944.f_651[iVar0 /*14*/] == iParam0)
		{
			func_38(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_836)
	{
		if (Global_97173.f_5944.f_765[iVar0 /*10*/] == iParam0)
		{
			func_37(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_37(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_97173.f_5944.f_836)
	{
		return;
	}
	if (Global_97173.f_5944.f_836 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97173.f_5944.f_836 - 2))
		{
			Global_97173.f_5944.f_765[iVar0 /*10*/] = { Global_97173.f_5944.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_97173.f_5944.f_836 > 0)
	{
		Global_97173.f_5944.f_765[(Global_97173.f_5944.f_836 - 1) /*10*/] = { Var1 };
		Global_97173.f_5944.f_836 = (Global_97173.f_5944.f_836 - 1);
	}
}

void func_38(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_97173.f_5944.f_764)
	{
		return;
	}
	if (Global_97173.f_5944.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97173.f_5944.f_764 - 2))
		{
			Global_97173.f_5944.f_651[iVar0 /*14*/] = { Global_97173.f_5944.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_97173.f_5944.f_764 > 0)
	{
		Global_97173.f_5944.f_651[(Global_97173.f_5944.f_764 - 1) /*14*/] = { Var1 };
		Global_97173.f_5944.f_764 = (Global_97173.f_5944.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_39(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_97173.f_5944.f_650)
	{
		if (Global_97173.f_5944.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_97173.f_5944.f_650 - 2))
			{
				Global_97173.f_5944.f_199[iVar16 /*15*/] = { Global_97173.f_5944.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_97173.f_5944.f_199[(Global_97173.f_5944.f_650 - 1) /*15*/] = { Var0 };
			Global_97173.f_5944.f_650 = (Global_97173.f_5944.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_40(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_97173.f_5944.f_198)
	{
		if (Global_97173.f_5944.f_137[iVar15 /*15*/] == iParam0)
		{
			func_41(Global_97173.f_5944.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_97173.f_5944.f_198 - 2))
			{
				Global_97173.f_5944.f_137[iVar16 /*15*/] = { Global_97173.f_5944.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_97173.f_5944.f_137[(Global_97173.f_5944.f_198 - 1) /*15*/] = { Var0 };
			Global_97173.f_5944.f_198 = (Global_97173.f_5944.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_97173.f_29699[iParam0 /*29*/].f_19[Global_14393] == 1)
		{
			Global_97173.f_29699[iParam0 /*29*/].f_19[Global_14393] = 0;
			if (Global_97173.f_29699[iParam0 /*29*/].f_24[Global_14393] == 0)
			{
				iVar0 = Global_14393;
				func_42(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_97173.f_5944.f_136)
	{
		return;
	}
	iVar1 = Global_97173.f_5944[iParam0 /*15*/].f_2;
	if (Global_97173.f_5944.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97173.f_5944.f_136 - 2))
		{
			Global_97173.f_5944[iVar0 /*15*/] = { Global_97173.f_5944[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_97173.f_5944.f_136 > 0)
	{
		Global_97173.f_5944[(Global_97173.f_5944.f_136 - 1) /*15*/] = { Var2 };
		Global_97173.f_5944.f_136 = (Global_97173.f_5944.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA921AA820C25702F(iVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

