#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
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
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17[3] = { 0, 0, 0 };
	int iLocal_21 = 0;
	bool bLocal_22 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.33.28";
	unk_0x6ECAEE4901F465A1(0);
	unk_0x84027ACC1E53BA5C();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1318845 = unk_0x7CBED6EFED40E7EB(sLocal_0);
	iVar0 = unk_0x693EBB4F13506457() + 10000;
	while (unk_0x693EBB4F13506457() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_108())
		{
			func_107();
			if (bLocal_1)
			{
				unk_0x3990B11991B0B160(0f, 0.23f);
				unk_0xE626AAE57E9B7B3E(255, 255, 255, 255);
				func_106(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			func_105();
			func_101();
			func_97();
			func_96();
			func_73();
			func_63();
			func_60();
			func_59();
			func_58();
			func_55();
			func_54();
			func_53();
			func_39();
			func_12();
			func_11();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xA4E0D8FD51F2A6F7();
}

void func_1()
{
	int iVar0;
	
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (((((unk_0xDCC86F723E82125E(Global_91158.f_1300[39], 6) || unk_0xDCC86F723E82125E(Global_91158.f_1300[40], 6)) || unk_0xDCC86F723E82125E(Global_91158.f_1300[41], 6)) || unk_0xDCC86F723E82125E(Global_91158.f_1300[42], 6)) || unk_0xDCC86F723E82125E(Global_91158.f_1300[43], 6)) || unk_0xDCC86F723E82125E(Global_91158.f_1300[44], 6))
	{
		if (!func_10(iVar0))
		{
			if (!func_9(Global_2458121.f_275))
			{
				if (!func_8(Global_2458121.f_275, 1, 0, 0, 0, 0))
				{
					bLocal_22 = true;
					unk_0x59A0729D503ED758(&(Global_91158.f_1445), 4);
				}
				else
				{
					func_3(0, 0, 0, 0);
					func_2(7);
				}
			}
			else if (unk_0x95CCECA3948CFE7B(Global_2458121.f_275))
			{
				if (!func_8(Global_2458121.f_275, 1, 0, 0, 0, 0))
				{
					bLocal_22 = true;
					unk_0x59A0729D503ED758(&(Global_91158.f_1445), 4);
				}
				else
				{
					func_3(0, 0, 0, 0);
					func_2(7);
				}
			}
		}
	}
	else
	{
		bLocal_22 = false;
	}
	if (bLocal_22)
	{
		if (unk_0x95CCECA3948CFE7B(iVar0) && unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			if (unk_0x9F7DDFEF511FDBD8("Not_Allow_As_Saved_Veh", 3))
			{
				if (!unk_0x3D32B80EFC48A92D(iVar0, "Not_Allow_As_Saved_Veh"))
				{
					unk_0x99230E3785E2C923(iVar0, "Not_Allow_As_Saved_Veh", unk_0x7CBED6EFED40E7EB(unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638())));
					iLocal_21 = 1;
				}
			}
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_91158.f_1445), 4);
		if (iLocal_21)
		{
			if (unk_0x95CCECA3948CFE7B(iVar0) && unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (unk_0x9F7DDFEF511FDBD8("Not_Allow_As_Saved_Veh", 3))
				{
					if (unk_0x3D32B80EFC48A92D(iVar0, "Not_Allow_As_Saved_Veh"))
					{
						unk_0x14F2DDCE0EA9039E(iVar0, "Not_Allow_As_Saved_Veh");
						iLocal_21 = 0;
					}
				}
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_2433864.f_4080.f_218[iParam0] = 0;
}

void func_3(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_7(2);
	}
	else
	{
		func_7(1);
	}
	if (bParam1)
	{
		func_7(11);
	}
	if (bParam2)
	{
		func_7(32);
		if (bParam3)
		{
			if (unk_0xDCC86F723E82125E(Global_1321271[func_5() /*138*/].f_99, 0))
			{
				func_7(33);
			}
		}
		else
		{
			func_4(33);
		}
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		Global_2458121.f_352 = unk_0x2AA13A84EE2D3B24();
	}
}

void func_4(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xDCC86F723E82125E(Global_2426867.f_501.f_1, iParam0))
		{
			unk_0x77621132305B133B(&(Global_2426867.f_501.f_1), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2426867.f_501.f_2, (iParam0 - 32)))
	{
		unk_0x77621132305B133B(&(Global_2426867.f_501.f_2), (iParam0 - 32));
	}
}

int func_5()
{
	return Global_2097152[func_6() /*10270*/].f_7698.f_2;
}

int func_6()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_7(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xDCC86F723E82125E(Global_2426867.f_501.f_1, iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_2426867.f_501.f_1), iParam0);
		}
	}
	else if (!unk_0xDCC86F723E82125E(Global_2426867.f_501.f_2, (iParam0 - 32)))
	{
		unk_0x59A0729D503ED758(&(Global_2426867.f_501.f_2), (iParam0 - 32));
	}
}

int func_8(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x7EFD275DF858497F(iParam0) + 1;
	if (iParam4 || !unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x74CAAD9E721B315D(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xC0ADAF0814175B68(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0xC8B93D94F8954288())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x2DC9BA2299B45EA6(iVar2))
					{
						if (unk_0xA815CBE767EFA3CB(iVar2))
						{
							if (unk_0x6338DEFCA89B8CD6(unk_0x8ACC9D9AC6076DCB(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xC0ADAF0814175B68(iParam0, (iVar0 - 1));
					if (!unk_0x2DC9BA2299B45EA6(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_9(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (Global_69317)
	{
		if (unk_0x3D32B80EFC48A92D(iParam0, "Player_Vehicle"))
		{
			if (unk_0xFE76479AD91F5A0A(iParam0, "Player_Vehicle") == unk_0xF9FA30405FCA1A02(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_11()
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		if (((((!unk_0xDCC86F723E82125E(Global_91158.f_1300[39], 6) && !unk_0xDCC86F723E82125E(Global_91158.f_1300[40], 6)) && !unk_0xDCC86F723E82125E(Global_91158.f_1300[41], 6)) && !unk_0xDCC86F723E82125E(Global_91158.f_1300[42], 6)) && !unk_0xDCC86F723E82125E(Global_91158.f_1300[43], 6)) && !unk_0xDCC86F723E82125E(Global_91158.f_1300[44], 6))
		{
			iLocal_15 = 0;
		}
		else if (Global_91158.f_389 == 61)
		{
			iVar0 = unk_0xF6C10CD660E6EF6F(unk_0xC8B93D94F8954288(), &uVar2);
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if ((((((unk_0x95CCECA3948CFE7B(uVar2[iVar1]) && unk_0x5D42322C7DB888D0(uVar2[iVar1], 0)) && unk_0x6D5BB810CC209E15(uVar2[iVar1]) == joaat("tornado5")) && !unk_0x675A13D93AEAE680(uVar2[iVar1])) && !unk_0x95CCECA3948CFE7B(unk_0xC0ADAF0814175B68(uVar2[iVar1], -1))) && !unk_0xA6CD622BBD209756(uVar2[iVar1])) && unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(uVar2[iVar1], 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 1) < 5f)
				{
					unk_0x473F2FDD337B5EEC(uVar2[iVar1], 1);
					iLocal_15 = 1;
				}
				iVar1++;
			}
		}
		else if (iLocal_15)
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				if (((unk_0x95CCECA3948CFE7B(iVar13) && unk_0x5D42322C7DB888D0(iVar13, 0)) && unk_0x6D5BB810CC209E15(iVar13) == joaat("tornado5")) && unk_0xC0ADAF0814175B68(iVar13, -1) == unk_0xC8B93D94F8954288())
				{
					iLocal_16 = 1;
				}
			}
			iLocal_15 = 0;
		}
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar14 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x95CCECA3948CFE7B(iVar14) && unk_0x5D42322C7DB888D0(iVar14, 0))
			{
				if ((((func_10(iVar14) && unk_0x6D5BB810CC209E15(iVar14) == joaat("tornado5")) && func_5() != -1) && unk_0x675A13D93AEAE680(iVar14)) && (iLocal_16 || unk_0xDCC86F723E82125E(uLocal_17[(func_5() / 32)], (func_5() % 32))))
				{
					unk_0x473F2FDD337B5EEC(iVar14, 0);
					unk_0x59A0729D503ED758(&(uLocal_17[(func_5() / 32)]), (func_5() % 32));
					iLocal_16 = 0;
				}
			}
		}
	}
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDC9A5ADFE0C41DD2())
	{
		if (func_38() && !func_37())
		{
			if (func_35(&uLocal_13))
			{
				if (!func_34(&uLocal_13))
				{
					func_33(&uLocal_13, 0, 0);
				}
				iVar0 = unk_0xA34E7C2A5118D638();
				if (func_32(&uLocal_13, Global_262145.f_4129, 0) && Global_1587175[iVar0 /*410*/].f_11 != -1)
				{
					iVar1 = Global_1587175[iVar0 /*410*/].f_11;
					if (unk_0xDF73DA5E2287C499(iVar1) && !func_29(iVar1, 0))
					{
						if (iVar1 != unk_0xA34E7C2A5118D638())
						{
							if (unk_0x3323DA4DD0CC144D(iVar1))
							{
								if (unk_0x69BD9D3E8B7FED20(iVar1))
								{
									if (unk_0x107E9765B99FA5EB(iVar1))
									{
										func_28();
										func_27();
										func_26();
										func_16();
										func_15(0);
										func_14();
									}
								}
							}
						}
					}
				}
			}
		}
		else if (func_34(&uLocal_13))
		{
			func_13(&uLocal_13);
		}
	}
	else if (func_34(&uLocal_13))
	{
		func_13(&uLocal_13);
	}
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_14()
{
	unk_0x59A0729D503ED758(&(Global_2433098.f_2), 23);
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_2433864.f_1.f_2808), 0);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_2433864.f_1.f_2808), 0);
	}
}

void func_16()
{
	struct<13> Var0;
	char cVar13[64];
	
	if (func_29(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	Var0 = { func_25() };
	StringCopy(&cVar13, unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), 64);
	if (!func_24(Var0))
	{
		if (Global_2433864.f_1.f_2804 > 0)
		{
			func_20(&cVar13, &Var0, 1, 0);
		}
		else
		{
			func_20(&cVar13, &Var0, 1, -1);
		}
		func_19(0);
		if (func_18())
		{
			func_17();
		}
	}
}

void func_17()
{
	Global_1574320 = 0;
	Global_1574321 = 0;
}

bool func_18()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
}

void func_19(int iParam0)
{
	Global_2433864.f_1.f_2810 = iParam0;
}

int func_20(char[4] cParam0, var uParam1, bool bParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = Global_2433864.f_1.f_2804;
	}
	else
	{
		func_23(iParam3);
	}
	Global_2433864.f_1.f_844[iParam3 /*57*/].f_13 = { *cParam0 };
	Global_2433864.f_1.f_844[iParam3 /*57*/] = { *uParam1 };
	if (unk_0xE3E0CC0E2F54D42E(uParam1))
	{
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_53 = 2;
		func_21(*uParam1, &(Global_2433864.f_1.f_844[iParam3 /*57*/].f_29));
	}
	else
	{
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_53 = 1;
		StringCopy(&(Global_2433864.f_1.f_844[iParam3 /*57*/].f_29), "", 16);
	}
	if (bParam2)
	{
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_33[0] = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_33[1] = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_45 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_46 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_47 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_48 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_49 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_50 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_54 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_55 = 0;
		Global_2433864.f_1.f_844[iParam3 /*57*/].f_56 = 0;
	}
	Global_2433864.f_1.f_2804++;
	return iParam3;
}

void func_21(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, char[4] cParam13)
{
	var uVar0;
	
	StringCopy(cParam13, "", 16);
	unk_0x59E0C66A4FA07806(&uVar0, 35, &uParam0);
	func_22(&uVar0, cParam13);
}

void func_22(var uParam0, char* sParam1)
{
	unk_0xE0F4EA2B2963CFA2(uParam0, 35, sParam1);
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	while (iVar0 <= (Global_2433864.f_1.f_2804 - 1))
	{
		iVar1 = (Global_2433864.f_1.f_2804 - iVar0);
		if (iVar1 > 0 && iVar1 < 32)
		{
			Global_2433864.f_1.f_844[iVar1 /*57*/] = { Global_2433864.f_1.f_844[(iVar1 - 1) /*57*/] };
		}
		iVar0++;
	}
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_2433864.f_1.f_2804 - 1))
	{
		if (unk_0x7B7D10220EEEBC47(&(Global_2433864.f_1.f_844[iVar0 /*57*/]), &uParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_25()
{
	struct<13> Var0;
	
	unk_0x6707854F73309A59(&Var0, 13);
	return Var0;
}

void func_26()
{
	Global_2433098.f_589 = 1;
}

void func_27()
{
	Global_2433098.f_10 = 0;
}

void func_28()
{
	Global_2433098.f_749 = 0;
}

bool func_29(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_30(-1) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
	}
	if (Global_1315889[iVar1] == 1)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
	}
	return iVar0;
}

int func_31()
{
	return Global_1312746;
}

int func_32(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_33(uParam0, bParam2, 0);
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_33(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
		}
		uParam0->f_1 = 1;
	}
}

bool func_34(var uParam0)
{
	return uParam0->f_1;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	if (!func_34(uParam0))
	{
		func_33(uParam0, 0, 0);
	}
	else if (func_32(uParam0, Global_262145.f_4129, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < Global_2433864.f_1.f_835)
	{
		if (unk_0xB622E0FF38C89E7E(&(Global_2433864.f_1.f_417[iVar1 /*13*/]), 13))
		{
			if (!unk_0xE3E0CC0E2F54D42E(&(Global_2433864.f_1.f_417[iVar1 /*13*/])))
			{
				iVar0 = 0;
			}
			else
			{
				iVar2 = unk_0x005EF09BBC76ACC4(&(Global_2433864.f_1.f_417[iVar1 /*13*/]));
				if (iVar2 != func_36() && unk_0xDF73DA5E2287C499(iVar2))
				{
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_36()
{
	return -1;
}

bool func_37()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 23);
}

var func_38()
{
	return Global_2433098.f_10;
}

void func_39()
{
	int iVar0;
	int iVar1;
	
	if ((((((func_52(unk_0xA34E7C2A5118D638(), 1, 1) && Global_91158.f_297 == 0) && unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638())) && func_46() == 0) && !unk_0xDC9A5ADFE0C41DD2()) && !func_42(unk_0xA34E7C2A5118D638())) && !func_41(unk_0xA34E7C2A5118D638(), 1))
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), uLocal_12)) > 10000)
		{
			iVar1 = func_6();
			iVar0 = 0;
			while (iVar0 < 11)
			{
				if (Global_2097152[iVar1 /*10270*/].f_7698.f_1238[iVar0])
				{
					if (((((func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 11, Global_2097152[iVar1 /*10270*/].f_7698.f_728[iVar0 /*13*/][11], Global_2097152[iVar1 /*10270*/].f_7698.f_872[iVar0 /*13*/][11])) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 4, Global_2097152[iVar1 /*10270*/].f_7698.f_728[iVar0 /*13*/][4], Global_2097152[iVar1 /*10270*/].f_7698.f_872[iVar0 /*13*/][4]))) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 6, Global_2097152[iVar1 /*10270*/].f_7698.f_728[iVar0 /*13*/][6], Global_2097152[iVar1 /*10270*/].f_7698.f_872[iVar0 /*13*/][6]))) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 7, Global_2097152[iVar1 /*10270*/].f_7698.f_728[iVar0 /*13*/][7], Global_2097152[iVar1 /*10270*/].f_7698.f_872[iVar0 /*13*/][7]))) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 8, Global_2097152[iVar1 /*10270*/].f_7698.f_728[iVar0 /*13*/][8], Global_2097152[iVar1 /*10270*/].f_7698.f_872[iVar0 /*13*/][8]))) || func_40(unk_0x5A20391B13A0611C(unk_0xC8B93D94F8954288(), 0, Global_2097152[iVar1 /*10270*/].f_7698.f_1016[iVar0 /*10*/][0], Global_2097152[iVar1 /*10270*/].f_7698.f_1127[iVar0 /*10*/][0])))
					{
						Global_2097152[iVar1 /*10270*/].f_7698.f_1238[iVar0] = 0;
					}
				}
				iVar0++;
			}
			if (((((func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 11, unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 11), unk_0x268F3DC177BF5D38(unk_0xC8B93D94F8954288(), 11))) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 4, unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 4), unk_0x268F3DC177BF5D38(unk_0xC8B93D94F8954288(), 4)))) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 6, unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 6), unk_0x268F3DC177BF5D38(unk_0xC8B93D94F8954288(), 6)))) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 7, unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 7), unk_0x268F3DC177BF5D38(unk_0xC8B93D94F8954288(), 7)))) || func_40(unk_0x4D4C7C54C2E89DDF(unk_0xC8B93D94F8954288(), 8, unk_0x3A59BCC40A12FD28(unk_0xC8B93D94F8954288(), 8), unk_0x268F3DC177BF5D38(unk_0xC8B93D94F8954288(), 8)))) || func_40(unk_0x5A20391B13A0611C(unk_0xC8B93D94F8954288(), 0, unk_0xFEBA5661B4F1602A(unk_0xC8B93D94F8954288(), 0), unk_0x92A7B7367F7CD521(unk_0xC8B93D94F8954288(), 0))))
			{
				if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == joaat("mp_m_freemode_01"))
				{
					unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 3, 97, 0, 0);
				}
				else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == joaat("mp_f_freemode_01"))
				{
					unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 3, 112, 0, 0);
				}
				Global_2457030 = 1;
			}
			uLocal_12 = unk_0x2AA13A84EE2D3B24();
		}
	}
	else
	{
		uLocal_12 = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), 5000);
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case -1697490107:
		case 1244356498:
		case 863777332:
		case 631674505:
		case -960480251:
		case 1494999230:
		case 1869352282:
		case -13877721:
		case 318989781:
		case joaat("DLC_MP_APA_F_JBIB_4_2"):
		case 2034437041:
		case joaat("DLC_MP_APA_F_JBIB_6_0"):
		case joaat("DLC_MP_APA_F_JBIB_6_1"):
		case -1814618793:
		case -1651429173:
		case -1109205107:
		case -338576534:
		case -644901146:
		case 120812077:
		case joaat("DLC_MP_APA_F_JBIB_8_4"):
		case -181924378:
		case 511598738:
		case -1582242055:
		case -890095237:
		case -1106468944:
		case -766352173:
		case joaat("DLC_MP_APA_F_JBIB_10_1"):
		case 1055178230:
		case 763829051:
		case 1635609351:
		case 1338394521:
		case 1023910428:
		case -1153884555:
		case -815519388:
		case joaat("DLC_MP_APA_F_JBIB_13_0"):
		case -1491335966:
		case 1112376217:
		case 1505799307:
		case 2082926935:
		case joaat("DLC_MP_APA_F_JBIB_16_2"):
		case -705583889:
		case 852450985:
		case 826516320:
		case 495587617:
		case 2026344688:
		case -1778267292:
		case -1472958519:
		case -1313635633:
		case -1023597214:
		case -574530838:
		case -1917302634:
		case 755174499:
		case 981608289:
		case 1278495429:
		case 1578036858:
		case joaat("DLC_MP_APA_F_JBIB_25_0"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 2101691184:
		case -50873153:
		case joaat("DLC_MP_APA_F_LEGS_2_1"):
		case -1397953147:
		case 905707553:
		case -1795207349:
		case -1559893160:
		case 819398396:
		case 1076012435:
		case joaat("DLC_MP_APA_F_LEGS_4_4"):
		case joaat("DLC_MP_APA_F_LEGS_5_0"):
		case joaat("DLC_MP_APA_F_LEGS_5_1"):
		case -2132764550:
		case -210043471:
		case joaat("DLC_MP_APA_F_LEGS_5_4"):
		case joaat("DLC_MP_APA_F_LEGS_6_0"):
		case -460992432:
		case joaat("DLC_MP_APA_F_LEGS_6_2"):
		case 37522365:
		case joaat("DLC_MP_APA_F_LEGS_7_0"):
		case -310078170:
		case joaat("DLC_MP_APA_F_LEGS_8_1"):
		case joaat("DLC_MP_APA_F_LEGS_8_2"):
		case 1479240306:
		case joaat("DLC_MP_APA_F_LEGS_9_0"):
		case joaat("DLC_MP_APA_F_LEGS_12_0"):
		case -664552834:
		case -2037049630:
		case -104399548:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_APA_F_FEET_0_0"):
		case joaat("DLC_MP_APA_F_FEET_2_0"):
		case -2005924878:
		case -1264731975:
		case -958374594:
		case joaat("DLC_MP_APA_F_FEET_3_2"):
		case -1683847485:
		case joaat("DLC_MP_APA_F_FEET_4_0"):
		case 1080804486:
		case 1340826501:
		case 1236260618:
		case 1478849525:
		case 1551220777:
		case 2059205815:
		case 148019428:
		case 405583768:
		case 1852433417:
		case -1299464852:
		case -1076242424:
		case 1469187962:
		case 1698144965:
		case 2061880865:
		case joaat("DLC_MP_APA_F_SPECIAL_1_0"):
		case 285578369:
		case 474786575:
		case 223022352:
		case 386998428:
		case -388479961:
		case -744547915:
		case 1333556044:
		case 609426682:
		case -1565484621:
		case joaat("DLC_MP_APA_F_SPECIAL_3_3"):
		case 153151122:
		case -597586668:
		case joaat("DLC_MP_APA_F_TEETH_0_0"):
		case 653911448:
		case -1519558015:
		case -1509617832:
		case -552962106:
		case 571566700:
		case -801454400:
		case 1577827331:
		case 807355299:
		case joaat("DLC_MP_APA_F_SPECIAL2_1_0"):
		case 573873761:
		case 803879372:
		case -892781945:
		case -1116102680:
		case -564862562:
		case 1775069019:
		case 1550891523:
		case joaat("DLC_MP_APA_F_PHEAD_1_1"):
		case joaat("DLC_MP_APA_F_PHEAD_1_2"):
			return 1;
			break;
		
		case -672134378:
		case -484096606:
		case -681300448:
		case 257695247:
		case 550170193:
		case -360939083:
		case 895522684:
		case joaat("DLC_MP_APA_M_JBIB_4_0"):
		case -739443197:
		case 1647024774:
		case -1198403230:
		case joaat("DLC_MP_APA_M_JBIB_6_0"):
		case joaat("DLC_MP_APA_M_JBIB_6_1"):
		case 1630626729:
		case 941265276:
		case 881446284:
		case 1223489106:
		case 388895445:
		case 660058920:
		case joaat("DLC_MP_APA_M_JBIB_8_4"):
		case -1565801673:
		case -126980421:
		case -971077092:
		case -1509471686:
		case -1054605197:
		case -1798008670:
		case joaat("DLC_MP_APA_M_JBIB_10_1"):
		case -463228985:
		case 103478101:
		case -605293415:
		case -1393289558:
		case -1162694105:
		case -1738379897:
		case 101240891:
		case joaat("DLC_MP_APA_M_JBIB_13_0"):
		case -272483817:
		case 869567566:
		case -1614524187:
		case 964953190:
		case joaat("DLC_MP_APA_M_JBIB_16_2"):
		case 1585040977:
		case 1220846311:
		case -180257876:
		case 773303613:
		case -43531404:
		case -234181454:
		case -532084433:
		case 260597677:
		case -65421104:
		case -1158463868:
		case 67032006:
		case -504937326:
		case -719246586:
		case 258875295:
		case -254090631:
		case joaat("DLC_MP_APA_M_JBIB_24_0"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case -1454134696:
		case 862419088:
		case joaat("DLC_MP_APA_M_LEGS_2_1"):
		case joaat("DLC_MP_APA_M_LEGS_3_0"):
		case -1218262075:
		case -1091214220:
		case joaat("DLC_MP_APA_M_LEGS_4_1"):
		case 1651125087:
		case 1898432730:
		case joaat("DLC_MP_APA_M_LEGS_4_4"):
		case joaat("DLC_MP_APA_M_LEGS_5_0"):
		case -1435769399:
		case -1210220372:
		case -1896730922:
		case joaat("DLC_MP_APA_M_LEGS_5_4"):
		case 485903843:
		case 1251617062:
		case joaat("DLC_MP_APA_M_LEGS_6_2"):
		case 1752687841:
		case joaat("DLC_MP_APA_M_LEGS_7_0"):
		case 1100095433:
		case joaat("DLC_MP_APA_M_LEGS_8_1"):
		case joaat("DLC_MP_APA_M_LEGS_8_2"):
		case 1674798155:
		case joaat("DLC_MP_APA_M_LEGS_9_0"):
		case joaat("DLC_MP_APA_M_LEGS_11_0"):
		case -786201969:
		case -1039866806:
		case -1395344918:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_APA_M_FEET_0_0"):
		case joaat("DLC_MP_APA_M_FEET_2_0"):
		case 1515190786:
		case 1353529084:
		case 1046975089:
		case joaat("DLC_MP_APA_M_FEET_3_2"):
		case 1037209955:
		case 898422318:
		case -428623875:
		case -675964287:
		case -86515515:
		case -324975528:
		case joaat("DLC_MP_APA_M_FEET_5_0"):
		case joaat("DLC_MP_APA_M_FEET_5_1"):
		case -1370961300:
		case 61568300:
		case -773746279:
		case -311430559:
		case -546810286:
		case -1844462682:
		case -2083971303:
		case 738127742:
		case joaat("DLC_MP_APA_M_SPECIAL_1_0"):
		case -654188909:
		case -487067009:
		case -358907450:
		case 115653208:
		case -1646892999:
		case 1879018636:
		case -30928362:
		case 811071093:
		case 530666760:
		case joaat("DLC_MP_APA_M_SPECIAL_3_3"):
		case -1015276349:
		case -696597824:
		case joaat("DLC_MP_APA_M_TEETH_0_0"):
		case 1451524876:
		case -678623961:
		case -1254273277:
		case 1400019890:
		case 432404545:
		case -336716654:
		case -82784224:
		case 1296095987:
		case -510948971:
		case 1666190620:
		case 1943121439:
		case -1923624712:
		case -1626246037:
		case 718375917:
		case -679069478:
		case -1410320276:
		case joaat("DLC_MP_APA_M_PHEAD_1_1"):
		case joaat("DLC_MP_APA_M_PHEAD_1_2"):
			return 1;
			break;
	}
	return 0;
}

int func_41(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	if (func_45(iParam0))
	{
		return 1;
	}
	if (func_43(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_44(iParam0, 9);
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_9.f_4, iParam1);
}

int func_45(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

int func_46()
{
	if (func_50(1))
	{
		if (func_48())
		{
			return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_61.f_1;
		}
		else
		{
			return Global_1608811[func_47() /*109*/].f_9.f_61.f_1;
		}
	}
	return 0;
}

int func_47()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

bool func_48()
{
	return func_49(unk_0xA34E7C2A5118D638());
}

int func_49(int iParam0)
{
	if (iParam0 != func_36())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_36())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

bool func_50(bool bParam0)
{
	return func_51(unk_0xA34E7C2A5118D638(), bParam0);
}

bool func_51(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_49(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_36();
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_53()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2555031;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (Global_2555031[iVar1 /*7*/].f_2 == -1027218631 && Global_2555031[iVar1 /*7*/].f_1 > 100000)
		{
			Global_2555031[iVar1 /*7*/] = 2147483647;
			Global_2555031[iVar1 /*7*/].f_1 = 0;
			Global_2555031[iVar1 /*7*/].f_5 = 0;
			Global_2555031[iVar1 /*7*/].f_2 = -2085313189;
			Global_2555031[iVar1 /*7*/].f_6 = 0;
		}
		iVar1++;
	}
}

void func_54()
{
	if (!unk_0xDC9A5ADFE0C41DD2())
	{
		if (Global_1315837)
		{
			Global_1315837 = 0;
		}
	}
	else if (Global_1613622.f_41616 > 30)
	{
		Global_1613622.f_41616 = 30;
	}
}

void func_55()
{
	if (Global_1710052)
	{
		if (func_52(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 3))
			{
				if (func_56() && !unk_0x547823CBA92EEF50())
				{
					if (unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
					{
						Global_1710052 = 0;
					}
				}
			}
		}
	}
}

int func_56()
{
	if (func_57() == 0)
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	return Global_1312466.f_18;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		iVar0 = 0;
		while (iVar0 < Global_1587175)
		{
			unk_0x59A0729D503ED758(&(Global_1587175[iVar0 /*410*/].f_328), 1);
			iVar0++;
		}
	}
}

void func_59()
{
	if (!iLocal_11)
	{
		iLocal_8 = Global_68183;
		iLocal_9 = Global_68182;
		iLocal_10 = Global_67981;
		iLocal_11 = 1;
	}
	if (iLocal_8 != Global_68183)
	{
		if (Global_68182 == 0 && !Global_68183)
		{
			Global_68183 = iLocal_8;
		}
		if (Global_68182 == 0)
		{
			Global_68182 = iLocal_9;
		}
	}
	if (iLocal_9 != Global_68182 && Global_68182 == 0)
	{
		if (((((Global_67981 == 71 || Global_67981 == 72) || Global_67981 == 73) || Global_67981 == 74) || Global_67981 == 66) || Global_67981 == 67)
		{
			Global_68182 = iLocal_9;
		}
	}
	if (iLocal_10 != Global_67981)
	{
		if (Global_68183)
		{
			Global_68183 = 0;
		}
	}
	iLocal_10 = Global_67981;
	iLocal_8 = Global_68183;
	iLocal_9 = Global_68182;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 1);
		if ((unk_0x5D42322C7DB888D0(iVar0, 0) && unk_0xC0ADAF0814175B68(iVar0, -1) == unk_0xC8B93D94F8954288()) && func_62(unk_0x6D5BB810CC209E15(iVar0), 1))
		{
			iVar1 = func_61(iVar0, unk_0x342B167253E636DE(iVar0, 38));
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("slamvan3") && iVar1 == 3)
			{
				iVar1 = 2;
			}
			if (unk_0x342B167253E636DE(iVar0, 24) != iVar1)
			{
				unk_0xA05B0407D11A92AD(iVar0, 24, iVar1, 0);
			}
		}
	}
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x6D5BB810CC209E15(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x5A17E198896CB6A0(iParam0, 38);
		iVar1 = unk_0x5A17E198896CB6A0(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11357)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11358)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11356)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11359)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11361)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11360)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_63()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		switch (iVar1)
		{
			case 201:
				func_64(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_64(int iParam0)
{
	int iVar0;
	
	if (unk_0x74238B7708290D43(1, iParam0, &iVar0, 15))
	{
		switch (iVar0)
		{
			case 5:
				if (func_72() == 36)
				{
				}
				else if (func_71())
				{
				}
				else
				{
					if (func_18())
					{
						if (!Global_262145.f_4840 && func_70())
						{
						}
						else
						{
							func_69();
							if (!func_68())
							{
								func_67();
							}
							unk_0x13130F3C4AD245B1(5, 0, 0);
						}
					}
					if (func_66())
					{
						func_65();
					}
				}
				break;
			}
	}
}

void func_65()
{
	Global_2433098.f_658.f_10 = 1;
}

bool func_66()
{
	return Global_2433098.f_658.f_9;
}

void func_67()
{
	Global_2433098.f_579 = 1;
}

bool func_68()
{
	return Global_2433098.f_579;
}

void func_69()
{
	Global_2433098.f_711 = 1;
}

bool func_70()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_3, 1);
}

bool func_71()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 20);
}

int func_72()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177;
}

void func_73()
{
	int iVar0;
	
	if (unk_0xDC9A5ADFE0C41DD2() && func_95())
	{
		iVar0 = func_92();
		if ((iVar0 > -1 && unk_0xDF73DA5E2287C499(iVar0)) && !func_89(unk_0xA34E7C2A5118D638(), 1))
		{
			if (func_85(iVar0))
			{
				if (func_84() && func_83() == 64)
				{
					func_74(0, 0);
				}
			}
		}
	}
}

void func_74(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(bParam0);
	}
	func_78(0);
	func_75(65);
}

void func_75(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_83();
	if (Global_1315911)
	{
		sVar1 = func_77(iParam0);
		iVar2 = unk_0x7CBED6EFED40E7EB(sVar1);
		func_76(&Global_2443316, 1, 0);
		unk_0xC3BFED92026A2AAD(iVar2, 1, iVar0, iParam0, 0);
	}
	Global_1315844 = iParam0;
}

void func_76(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2AA13A84EE2D3B24();
		}
		else
		{
			*uParam0 = unk_0x3BC33547A5F418E8();
		}
	}
	else
	{
		*uParam0 = unk_0x693EBB4F13506457();
	}
	uParam0->f_1 = 1;
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

void func_78(int iParam0)
{
	Global_1315843 = iParam0;
}

void func_79(bool bParam0)
{
	int iVar0;
	
	func_81(&Global_17038);
	unk_0x0B6F2CD510BF11CB(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x0B12524914D4C2BD();
			func_80(0);
			if (unk_0x95CCECA3948CFE7B(Global_1318695))
			{
				if (unk_0x1F59F772AA90087D(Global_1318695, 0))
				{
					if (!unk_0xD28A89C669EAD2E4(Global_1318695))
					{
						unk_0xFD816D0E738EB817(Global_1318695, 0, 0);
					}
					unk_0x26B3B761603F5232(&Global_1318695);
				}
			}
		}
	}
}

void func_80(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2443299 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

void func_81(var uParam0)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x844838E5D8A21336(uParam0->f_9))
	{
		if (unk_0xF96FC657C212A30E(uParam0->f_9))
		{
			func_82(0);
		}
		unk_0x5CF5A880ED809DDA(uParam0->f_9, 0);
	}
	if (!Global_36716)
	{
		unk_0x764018CEDFACA24C(1);
		unk_0x9B42304CF6BA754C(0f);
		unk_0x509885C9E540EEB1(0f);
	}
	Global_2404919.f_555 = 0f;
	unk_0x2544549FDE4C3A7E(0, 0, 0, 1, 0, 0);
}

void func_82(int iParam0)
{
	Global_17116 = iParam0;
}

int func_83()
{
	return Global_1315844;
}

var func_84()
{
	return Global_1315911;
}

int func_85(int iParam0)
{
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if ((func_88(iParam0) || func_87(iParam0)) || func_86(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_86(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_85.f_32, 7);
}

bool func_87(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_85.f_32, 8);
}

bool func_88(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_39.f_18, 16);
}

int func_89(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_90(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587175[iParam0 /*410*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_90(int iParam0)
{
	return func_91(iParam0);
}

bool func_91(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

int func_92()
{
	if (func_29(unk_0xA34E7C2A5118D638(), 0))
	{
		if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_331 > -1)
		{
			return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_331;
		}
		else if (unk_0xDF73DA5E2287C499(func_94()))
		{
			func_93(func_94());
			return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_331;
		}
	}
	else
	{
		return func_94();
	}
	return func_36();
}

void func_93(int iParam0)
{
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_331 != iParam0)
	{
		Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_331 = iParam0;
	}
	StringCopy(&Global_1710508, unk_0x74C5CB21CF9F1178(iParam0), 24);
}

int func_94()
{
	return Global_2433098.f_637;
}

var func_95()
{
	return Global_2433098.f_597;
}

void func_96()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iVar1 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 1);
		if (unk_0x5D42322C7DB888D0(iVar1, 0))
		{
			if (unk_0xC0ADAF0814175B68(iVar1, -1) == unk_0xC8B93D94F8954288())
			{
				iVar2 = unk_0xA34E7C2A5118D638();
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (Global_1608811[iVar3 /*109*/].f_106 > 0)
					{
						if ((Global_1608811[iVar3 /*109*/].f_106 - 1) == iVar2)
						{
							if ((unk_0x20A20BF765914E37(iVar3) != func_36() && unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(iVar3))) && iVar1 == unk_0x275BEBE583A163B5(unk_0xCF4C00513A86E840(unk_0x20A20BF765914E37(iVar3)), 0))
							{
								unk_0xD4781E5070EB1F1C(unk_0xC8B93D94F8954288(), iVar1, 0);
							}
						}
					}
					iVar3++;
				}
				bVar0 = true;
			}
			else if (unk_0xA9B6C2A8F9FE269A(1) == 4)
			{
				if (unk_0x493D58455424944D(unk_0xC8B93D94F8954288()))
				{
					iLocal_5 = 1;
				}
				else if (iLocal_5 && unk_0xC0ADAF0814175B68(iVar1, 0) == unk_0xC8B93D94F8954288())
				{
					iVar4 = unk_0xC0ADAF0814175B68(iVar1, -1);
					if (!unk_0x2DC9BA2299B45EA6(iVar4) && unk_0xA815CBE767EFA3CB(iVar4))
					{
						Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_106 = unk_0x8ACC9D9AC6076DCB(iVar4) + 1;
					}
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_106 != 0)
		{
			Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_106 = 0;
		}
		iLocal_5 = 0;
	}
}

void func_97()
{
	if (unk_0xDC9A5ADFE0C41DD2())
	{
		if (!iLocal_7)
		{
			if (!iLocal_6)
			{
				if (func_100())
				{
					iLocal_6 = 1;
				}
			}
			else if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] != -1)
			{
				if (func_99() != 31)
				{
					func_98(31);
				}
				iLocal_6 = 0;
				iLocal_7 = 1;
			}
		}
	}
	else
	{
		iLocal_6 = 0;
		iLocal_7 = 0;
	}
}

void func_98(int iParam0)
{
	Global_976341 = iParam0;
}

int func_99()
{
	return Global_976341;
}

bool func_100()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_3, 0);
}

void func_101()
{
	int iVar0;
	int iVar1;
	
	if (Global_25115 == 0)
	{
		if (!iLocal_4)
		{
			iVar0 = func_104();
			if (iVar0 > 0)
			{
				iVar1 = func_102(iVar0);
				if (iVar1 != 0)
				{
					unk_0x53213999BE2EAB82(iVar1);
					unk_0xAE2234DB4E043D03(-101, 0, 0);
					iLocal_4 = 1;
				}
			}
			else
			{
				iLocal_4 = 1;
			}
		}
	}
	else if (iLocal_4)
	{
		iLocal_4 = 0;
	}
}

var func_102(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 1:
			uVar0 = func_103("fm_race_creator");
			break;
		
		case 2:
			uVar0 = func_103("fm_deathmatch_creator");
			break;
		
		case 3:
			uVar0 = func_103("fm_lts_creator");
			break;
		
		case 4:
			uVar0 = func_103("fm_capture_creator");
			break;
	}
	return uVar0;
}

var func_103(char* sParam0)
{
	var uVar0;
	bool bVar1;
	
	unk_0xD96E3E726776E6F0();
	while (!bVar1)
	{
		uVar0 = unk_0x4CF8649413AC6C40();
		if (unk_0xF8D041B05C3D1FD4(unk_0x7B57105939A956F7(uVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return uVar0;
}

int func_104()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCBC8FFE55DC722B5(joaat("fm_race_creator")) != 0)
	{
		iVar0 = 1;
	}
	else if (unk_0xCBC8FFE55DC722B5(joaat("fm_deathmatch_creator")) != 0)
	{
		iVar0 = 2;
	}
	else if (unk_0xCBC8FFE55DC722B5(joaat("fm_lts_creator")) != 0)
	{
		iVar0 = 3;
	}
	else if (unk_0xCBC8FFE55DC722B5(joaat("fm_capture_creator")) != 0)
	{
		iVar0 = 4;
	}
	return iVar0;
}

void func_105()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xA34E7C2A5118D638();
	if ((Global_2439759 && iVar0 != -1) && Global_1587175[iVar0 /*410*/] == -1)
	{
		if (!iLocal_3)
		{
			iVar1 = 0;
			while (iVar1 < 1118)
			{
				if ((Global_794573.f_97271[iVar1 /*12*/].f_1 == -283677078 || Global_794573.f_97271[iVar1 /*12*/].f_1 == 1494121730) || Global_794573.f_97271[iVar1 /*12*/].f_1 == 797689172)
				{
					unk_0x77621132305B133B(&(Global_794573.f_4[iVar1 /*87*/].f_76), 14);
				}
				iVar1++;
			}
			iLocal_3 = 1;
		}
	}
	else
	{
		iLocal_3 = 0;
	}
}

void func_106(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0xCF61D472051E607A(sParam2);
	unk_0x6B0C98F2CFD22419(sParam3);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, 0);
}

void func_107()
{
	if (!bLocal_1)
	{
		if (unk_0x2BF05095F2389894())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x8D9008B8900A28D0(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x8D9008B8900A28D0(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x8D9008B8900A28D0(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x8D9008B8900A28D0(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x8D9008B8900A28D0(2, 188))
					{
						bLocal_1 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x2BF05095F2389894())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x8D9008B8900A28D0(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x8D9008B8900A28D0(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x8D9008B8900A28D0(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x8D9008B8900A28D0(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x8D9008B8900A28D0(2, 189))
				{
					bLocal_1 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_108()
{
	return unk_0x9F37711843A20114(-1762644250);
}

