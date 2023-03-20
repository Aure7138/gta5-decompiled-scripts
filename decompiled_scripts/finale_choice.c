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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 1;
	if (unk_0x2170E7BC25114A22(18))
	{
		func_38();
	}
	func_37(20);
	func_36();
	func_35(1);
	func_35(0);
	func_35(2);
	func_35(13);
	func_35(12);
	Global_2318 = 1;
	func_34();
	if (!func_33(-1615086084))
	{
		func_32(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_33(-1970925435))
	{
		func_32(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_33(-1817481777))
	{
		func_32(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_31(23) && !func_30(134))
	{
		if (func_26() == 1)
		{
			if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
				{
					if ((!unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126()) && !unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126())) && !unk_0xF60B0BCAFB1D30FF(unk_0xD5A676B97920D126()))
					{
						if (!bVar0)
						{
							if (!((func_25() || unk_0xB0D174BA6F10DF7B()) || func_24()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 384);
								unk_0x759857815829A6A8(unk_0xD5A676B97920D126(), 0f);
								unk_0x10D6B14E90725B6D(0, 173, 1);
								unk_0x10D6B14E90725B6D(0, 172, 1);
								unk_0x10D6B14E90725B6D(0, 174, 1);
								unk_0x10D6B14E90725B6D(0, 175, 1);
								unk_0x10D6B14E90725B6D(0, 176, 1);
								unk_0x10D6B14E90725B6D(0, 177, 1);
								unk_0x10D6B14E90725B6D(0, 178, 1);
								unk_0x10D6B14E90725B6D(0, 179, 1);
								unk_0x10D6B14E90725B6D(0, 180, 1);
								unk_0x10D6B14E90725B6D(0, 181, 1);
							}
							else
							{
								unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_33(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									unk_0xB924315F0872835A(joaat("sp_final_decision"), 2, 1);
									break;
								
								case -1970925435:
									if (!func_33(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									unk_0xB924315F0872835A(joaat("sp_final_decision"), 1, 1);
									break;
								
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									unk_0xB924315F0872835A(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_28)
									{
										if (func_4())
										{
											iLocal_28 = 0;
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
	Global_91525 = 0;
	func_1();
	func_38();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
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
	if (unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iVar0], iVar1))
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_8028.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101652.f_8028.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101652.f_8028.f_99.f_58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_101652.f_8028.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_101652.f_8028.f_99.f_205[iParam0] = iParam1;
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
	if (Global_101652.f_6631.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_101652.f_6631.f_911 == Var0.f_0)
		{
			Global_101652.f_6631.f_911 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x84A97C70FFDEC0C8() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0xB8A73E7DA87B2968(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xB8A73E7DA87B2968(&(Var0.f_1), 0);
		unk_0x4EA098C870B73AB7(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0xB8A73E7DA87B2968(&(Var0.f_1), 10);
		}
		Global_101652.f_6631[Global_101652.f_6631.f_136 /*15*/] = { Var0 };
		Global_101652.f_6631.f_136++;
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
	while (iVar0 < Global_101652.f_6631.f_136)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_6631[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101652.f_6631[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101652.f_6631[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101652.f_6631.f_764)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_6631.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101652.f_6631.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101652.f_6631.f_919[iParam0] = iVar1;
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
		case 4:
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
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_12()
{
	return Global_101652.f_6631.f_911;
}

int func_13()
{
	if (Global_14443.f_1 > 3)
	{
		unk_0x4EA098C870B73AB7(&Global_2314, 0);
		func_21(0);
		return 0;
	}
	unk_0xB8A73E7DA87B2968(&Global_2314, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	unk_0x4EA098C870B73AB7(&Global_2314, 0);
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_69697)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!unk_0xF44A5E894FE76438(Global_2595258, 14))
		{
			if (iParam0 == 17)
			{
				unk_0xB8A73E7DA87B2968(&Global_2595258, 14);
				unk_0xB8A73E7DA87B2968(&Global_2595258, 16);
			}
			if (iParam0 == 3)
			{
				unk_0xB8A73E7DA87B2968(&Global_2595258, 14);
				unk_0xB8A73E7DA87B2968(&Global_2595258, 15);
			}
			if (iParam0 == 23)
			{
				unk_0xB8A73E7DA87B2968(&Global_2595258, 14);
				unk_0xB8A73E7DA87B2968(&Global_2595258, 27);
			}
		}
		if (Global_2320[iParam0 /*15*/].f_9 == 0)
		{
			func_20();
		}
		if (unk_0xAB964FCFAC3C767A(Global_2320[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x4EA098C870B73AB7(&Global_2595258, 14);
			unk_0x4EA098C870B73AB7(&Global_2595258, 16);
			unk_0x4EA098C870B73AB7(&Global_2595258, 15);
			unk_0x4EA098C870B73AB7(&Global_2595258, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_14443.f_1 == 9)
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
	if (Global_14409 == 1)
	{
		return 0;
	}
	if (Global_14443.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x597C1E51157E5516(Global_14440))
	{
		if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14443.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
				{
					Global_14440 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0x0446A34B5E23D747("cellphone_flashhand");
			}
		}
	}
	while (!Global_14425)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_20();
	func_15();
	if (unk_0xAB964FCFAC3C767A(Global_2320[iParam0 /*15*/].f_9) == 0)
	{
		Global_2919 = 0;
		Global_14443.f_1 = 7;
		func_18(&(Global_2320[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0xAB964FCFAC3C767A(Global_2320[iParam0 /*15*/].f_9) == 0)
			{
				Global_14441 = unk_0xE81651AD79516E48(&(Global_2320[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0xAB964FCFAC3C767A(Global_2320[iParam0 /*15*/].f_9) == 0)
		{
			Global_14441 = unk_0xE81651AD79516E48(&(Global_2320[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x0446A34B5E23D747(&(Global_2320[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_69697 == 0)
	{
		Global_2320[14 /*15*/].f_4 = -99;
		Global_2320[4 /*15*/].f_4 = -99;
		if (Global_2452475)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2320[iParam0 /*15*/]), sParam1, 16);
	Global_2320[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2320[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2320[iParam0 /*15*/].f_9 = unk_0x6D9FF4C899CD785F(sParam3);
	Global_2320[iParam0 /*15*/].f_10 = iParam4;
	Global_2320[iParam0 /*15*/].f_11 = iParam5;
	Global_2320[iParam0 /*15*/].f_12 = iParam6;
	Global_2320[iParam0 /*15*/].f_13 = iParam7;
	Global_2320[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2320[iParam0 /*15*/].f_12 == 0)
	{
		Global_2320[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_13 == 0)
	{
		Global_2320[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_14 == 0)
	{
		Global_2320[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_18(char* sParam0)
{
	unk_0x7FC35FCC666F974E(sParam0);
	while (!unk_0x4AAFD43C0AFB7A1A(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_19()
{
	if (func_17(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_26();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2320[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69697 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 150)
		{
			if (Global_101652.f_26993[iVar2 /*29*/].f_19[Global_14443] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_35777 == 15 && func_2(0) == 0) && Global_2318 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 0;
			Global_2319 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 1;
			Global_2319 = 42;
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
		if (Global_101652.f_12994.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_101652.f_12994.f_88 == 1)
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
		if (unk_0xF44A5E894FE76438(Global_2595258, 4) == 1)
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
		if (!unk_0xF44A5E894FE76438(Global_2595258, 4) == 1)
		{
			if (Global_1573849)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0xF44A5E894FE76438(Global_2595258, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0xF44A5E894FE76438(Global_2595258, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0xF44A5E894FE76438(Global_2595258, 26) == 1)
			{
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0xF44A5E894FE76438(Global_2595258, 4) == 0 && Global_1573849 == 0) && unk_0xF44A5E894FE76438(Global_2595258, 20) == 0) && unk_0xF44A5E894FE76438(Global_2595258, 22) == 0) && unk_0xF44A5E894FE76438(Global_2595258, 26) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_21(int iParam0)
{
	if (Global_14604)
	{
		func_23(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_22())
	{
		Global_14443.f_1 = 3;
	}
}

int func_22()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_23(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_5(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_24()
{
	if (!unk_0x1995B52453EF6537())
	{
		return Global_89297.f_44 == 1;
	}
	return 0;
}

int func_25()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	func_27();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_27()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_29(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_28(unk_0xD5A676B97920D126());
			if (func_10(iVar0) && (!func_17(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_10(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_99.f_58[iParam0];
}

int func_31(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_330[iParam0 /*6*/];
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam2 < 3)
	{
		if (unk_0xF44A5E894FE76438(iParam1, iParam2))
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
	if (Global_101652.f_6631.f_650 < 30)
	{
		Var0.f_0 = iParam0;
		if (Global_101652.f_6631.f_911 == Var0.f_0)
		{
			Global_101652.f_6631.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (unk_0x84A97C70FFDEC0C8() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		unk_0xB8A73E7DA87B2968(&(Var0.f_1), 0);
		unk_0xB8A73E7DA87B2968(&(Var0.f_1), 6);
		Global_101652.f_6631.f_199[Global_101652.f_6631.f_650 /*15*/] = { Var0 };
		Global_101652.f_6631.f_650++;
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_136)
	{
		if (Global_101652.f_6631[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_650)
	{
		if (Global_101652.f_6631.f_199[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_198)
	{
		if (Global_101652.f_6631.f_137[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_764)
	{
		if (Global_101652.f_6631.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_866)
	{
		if (Global_101652.f_6631.f_765[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34()
{
	Global_91525 = 1;
}

void func_35(int iParam0)
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 150) || iParam0 == 151)
	{
		return;
	}
	Global_36329[iParam0] = unk_0x84A97C70FFDEC0C8();
}

void func_36()
{
	Global_36328 = unk_0x84A97C70FFDEC0C8();
}

int func_37(int iParam0)
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
	if (unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_8028.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_38()
{
	func_39(-1615086084);
	func_39(-1989308064);
	func_39(-1970925435);
	func_39(-1060930305);
	func_39(-1817481777);
	Global_2318 = 0;
	unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
	unk_0x01DFCA3621B68C4A();
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_136)
	{
		if (Global_101652.f_6631[iVar0 /*15*/] == iParam0)
		{
			if (Global_36324 != iVar0)
			{
				func_46(iVar0);
				func_43(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_198)
	{
		if (Global_101652.f_6631.f_137[iVar0 /*15*/] == iParam0)
		{
			func_43(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_650)
	{
		if (Global_101652.f_6631.f_199[iVar0 /*15*/] == iParam0)
		{
			func_42(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_764)
	{
		if (Global_101652.f_6631.f_651[iVar0 /*14*/] == iParam0)
		{
			func_41(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_6631.f_866)
	{
		if (Global_101652.f_6631.f_765[iVar0 /*10*/] == iParam0)
		{
			func_40(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_40(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_101652.f_6631.f_866)
	{
		return;
	}
	if (Global_101652.f_6631.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_101652.f_6631.f_866 - 2))
		{
			Global_101652.f_6631.f_765[iVar0 /*10*/] = { Global_101652.f_6631.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_101652.f_6631.f_866 > 0)
	{
		Global_101652.f_6631.f_765[(Global_101652.f_6631.f_866 - 1) /*10*/] = { Var1 };
		Global_101652.f_6631.f_866 = (Global_101652.f_6631.f_866 - 1);
	}
}

void func_41(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_101652.f_6631.f_764)
	{
		return;
	}
	if (Global_101652.f_6631.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_101652.f_6631.f_764 - 2))
		{
			Global_101652.f_6631.f_651[iVar0 /*14*/] = { Global_101652.f_6631.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_101652.f_6631.f_764 > 0)
	{
		Global_101652.f_6631.f_651[(Global_101652.f_6631.f_764 - 1) /*14*/] = { Var1 };
		Global_101652.f_6631.f_764 = (Global_101652.f_6631.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_42(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_101652.f_6631.f_650)
	{
		if (Global_101652.f_6631.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_101652.f_6631.f_650 - 2))
			{
				Global_101652.f_6631.f_199[iVar16 /*15*/] = { Global_101652.f_6631.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_101652.f_6631.f_199[(Global_101652.f_6631.f_650 - 1) /*15*/] = { Var0 };
			Global_101652.f_6631.f_650 = (Global_101652.f_6631.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_43(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_101652.f_6631.f_198)
	{
		if (Global_101652.f_6631.f_137[iVar15 /*15*/] == iParam0)
		{
			func_44(Global_101652.f_6631.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_101652.f_6631.f_198 - 2))
			{
				Global_101652.f_6631.f_137[iVar16 /*15*/] = { Global_101652.f_6631.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_101652.f_6631.f_137[(Global_101652.f_6631.f_198 - 1) /*15*/] = { Var0 };
			Global_101652.f_6631.f_198 = (Global_101652.f_6631.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_101652.f_26993[iParam0 /*29*/].f_19[Global_14443] == 1)
		{
			Global_101652.f_26993[iParam0 /*29*/].f_19[Global_14443] = 0;
			if (Global_101652.f_26993[iParam0 /*29*/].f_24[Global_14443] == 0)
			{
				iVar0 = Global_14443;
				func_45(iParam0, iVar0);
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

void func_45(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_101652.f_26993[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101652.f_26993[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_46(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_101652.f_6631.f_136)
	{
		return;
	}
	uVar1 = Global_101652.f_6631[iParam0 /*15*/].f_2;
	if (Global_101652.f_6631.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_101652.f_6631.f_136 - 2))
		{
			Global_101652.f_6631[iVar0 /*15*/] = { Global_101652.f_6631[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_101652.f_6631.f_136 > 0)
	{
		Global_101652.f_6631[(Global_101652.f_6631.f_136 - 1) /*15*/] = { Var2 };
		Global_101652.f_6631.f_136 = (Global_101652.f_6631.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xF44A5E894FE76438(uVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

