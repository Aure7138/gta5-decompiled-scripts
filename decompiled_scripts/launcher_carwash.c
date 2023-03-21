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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = 0;
	struct<3> Local_107[2];
	var uLocal_114[2] = { 0, 0 };
	int iLocal_117[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	var uVar1;
	struct<3> Var2;
	int iVar5;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x82F1A060D8F4583B(joaat("launcher_carwash")) > 1)
	{
		unk_0x921053BAF754303D();
	}
	if (unk_0x63C468D583002D23())
	{
		unk_0x330AFE43E1483B3F();
		unk_0xAA78C60F0BF0F8D4(0);
	}
	else if (unk_0xBCA819F9975BEDFA(99))
	{
		func_70();
	}
	if (Global_2621550)
	{
		if (unk_0x82F1A060D8F4583B(-949873222) == 0)
		{
			unk_0x40DAFD1EE608CAF6(-949873222);
			while (!unk_0x1773B272030A4F46(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0x921053BAF754303D();
	}
	if (func_69(unk_0x17B5CC8A8615737D()))
	{
	}
	func_63();
	while (true)
	{
		func_69(unk_0x17B5CC8A8615737D());
		if (func_62(unk_0x17B5CC8A8615737D(), Var2, 0) > (100f + 20f))
		{
			func_70();
		}
		bVar0 = false;
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			uVar1 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			bVar0 = (func_59(uVar1) || func_58(uVar1));
			bLocal_106 = unk_0xB92D42A6AB160A01(uVar1);
			func_57(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40.f_0)
		{
			func_56(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_70();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_51(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_44(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_41(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0xE6235D8850CC396F() && uParam1->f_16 == 0))
						{
							func_40(uParam1, 6);
						}
						else if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
						{
							func_40(uParam1, 8);
						}
						else if (bParam2)
						{
							func_40(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_40(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_40(uParam1, 1);
						}
						else if (func_25())
						{
							func_40(uParam1, 7);
						}
						else
						{
							func_40(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) == 0)
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_40(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0x28EAA5C7C54BD253(2, 51);
			unk_0xD1BB2AD73E7FC3A7(0, 101, 1);
			func_8();
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
			{
				func_40(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_40(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16))
			{
				func_40(uParam1, 0);
				return 0;
			}
			if (Global_68131)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) || func_4(unk_0x17B5CC8A8615737D(), 0) != -1)
				{
					func_40(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0xE6235D8850CC396F() && uParam1->f_16 == 0))
			{
				func_40(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_40(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_40(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
			}
			if (unk_0x95DBE123BC2DB80B() || unk_0xBC409B03D8BA213A())
			{
				return 0;
			}
			if (unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()))
			{
				if ((unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D()) || unk_0x39027D725EF551EA(unk_0x17B5CC8A8615737D())) || unk_0x53E28743D432E98F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if ((unk_0x6AA6883001999D61(unk_0x17B5CC8A8615737D()) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0x7276DD47CA44085D(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xDBB75EFBFFEDB00D(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xAC74327A3E5299B6(unk_0x17B5CC8A8615737D()) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x13B7ACE69D27E3E4(unk_0x17B5CC8A8615737D()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x4B972043966C2EB8(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_40(uParam1, 9);
				}
				else
				{
					func_40(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_40(uParam1, 0);
				return 1;
			}
			unk_0x2E2945F5602A744F(1);
			unk_0x7B408F9F309B3E56(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 20f, 0);
			if (!unk_0x9C88EB7B70229335((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0xFCDDC89C28E82BB4((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0x32B1F051FF487881((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_69(unk_0x17B5CC8A8615737D()))
					{
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !Global_69702)
						{
							func_2(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0x7B717981FC1BCC65(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0);
						}
					}
					unk_0x28EAA5C7C54BD253(2, 51);
					unk_0xFCDDC89C28E82BB4((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0xD1BB2AD73E7FC3A7(0, 101, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x50FD1894558DE186(250);
				}
				if (unk_0x32B1F051FF487881((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x25BD4C26D84038CD())
						{
							if (func_69(unk_0x17B5CC8A8615737D()))
							{
								if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !Global_69702)
								{
									func_2(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0x7B717981FC1BCC65(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0);
								}
							}
							unk_0x28EAA5C7C54BD253(2, 51);
							unk_0xD1BB2AD73E7FC3A7(0, 101, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 23, 1);
							func_8();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0x07481837BFD9C1CD((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam5)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 115, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 116, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 117, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 118, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 119, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 131, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 132, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 123, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 126, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 129, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 130, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 133, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 134, 1);
	unk_0xA07E0C7D04CFDAC7();
	func_3(iParam0);
	if ((unk_0x94E3E074F38DF86C() - Global_29) > 500)
	{
		unk_0xEEA9C8F490BB3507(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x94E3E074F38DF86C();
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0xE851F22ED3518011(unk_0x13B7ACE69D27E3E4(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	if (unk_0x2A0DB8BAFA0BA9B1(uParam0))
	{
		if (unk_0x877E4C9DCF0BC909(uParam0))
		{
			unk_0x84563853ACCAC2B6(uParam0, 0);
		}
	}
}

int func_4(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0xFD0FE723227D5AB6(iParam0, iParam1))
		{
			uVar0 = unk_0x60604E51E30D25B8(iParam0, iParam1);
			if (unk_0x23E9113C762466ED(uVar0))
			{
				if (!unk_0xA929B2923D14E2F8(iVar0, 0))
				{
					iVar1 = unk_0x74EBEFF57C45B722(unk_0x0324EEB10F81965F(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xC0FA8EEF6413F866(iVar0, iVar3, 0))
						{
							if (unk_0x17206B315923243C(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_35781 == iParam0;
}

int func_7()
{
	if (Global_100647)
	{
		return 1;
	}
	if (!func_6(14) && unk_0x82F1A060D8F4583B(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_17151.f_6 = 1;
}

int func_9(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x17B5CC8A8615737D();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		iVar3 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (func_69(iVar3))
		{
			Var0 = { unk_0xED13B51A133E020F(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0x8C79B6FF2A91C93F(iVar4) };
	if (func_10(uParam0->f_12, Var0) > unk_0xD0FFB162F40A139C(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	var uVar0;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		return unk_0x16924971637B41FA(uVar0, 1119092736);
	}
	return unk_0x16924971637B41FA(unk_0x17B5CC8A8615737D(), 1119092736);
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x9C88EB7B70229335(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0x9E123D5FF2973C60())
	{
		unk_0x2E2945F5602A744F(1);
		func_14(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(var uParam0, var uParam1)
{
	unk_0x252D021C9D92DBA9(uParam0);
	unk_0x69967F83C1E636E2(uParam1);
	unk_0x8B1500AADBA665BD(0, 1, 1, -1);
}

int func_15(var uParam0)
{
	if (unk_0x9C88EB7B70229335(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0x9E123D5FF2973C60())
	{
		return 0;
	}
	if (unk_0x6A7B0D91FD88D9EE(*uParam0, uParam0->f_14) || unk_0x6A7B0D91FD88D9EE(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

var func_16(var uParam0)
{
	unk_0x1B345BEADF0C82A0(uParam0);
	return unk_0xCF2B4FB18449D099(0);
}

var func_17(var uParam0, var uParam1)
{
	unk_0x1B345BEADF0C82A0(uParam0);
	unk_0x69967F83C1E636E2(uParam1);
	return unk_0xCF2B4FB18449D099(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			return 1;
		}
		if (func_4(unk_0x17B5CC8A8615737D(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(unk_0x17B5CC8A8615737D(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_19(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_20(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_21(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_22(var uParam0, var uParam1)
{
	if (unk_0x9C88EB7B70229335(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0x9E123D5FF2973C60())
	{
		unk_0x2E2945F5602A744F(1);
		func_23(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(var uParam0)
{
	unk_0x252D021C9D92DBA9(uParam0);
	unk_0x8B1500AADBA665BD(0, 1, 1, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		unk_0x2E2945F5602A744F(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
	if (unk_0x03767DFC5EE2B0C6(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !unk_0x45CD66F0A131E554(iVar0, 0);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (unk_0xC98320A98098650E(iParam0, 0, 0) && unk_0xC98320A98098650E(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xC98320A98098650E(iParam0, 4, 0) && unk_0xC98320A98098650E(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0xC98320A98098650E(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xC98320A98098650E(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xC98320A98098650E(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xC98320A98098650E(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (func_28(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	if (unk_0x63C468D583002D23())
	{
		return func_37(unk_0xBE369BE1BC57A796());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_52996[iParam0];
}

int func_32()
{
	func_33();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_33()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_36(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_35(unk_0x17B5CC8A8615737D());
			if (func_34(iVar0) && (!func_6(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_34(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	var uVar0;
	
	uVar0 = func_38(iParam0);
	return uVar0;
}

int func_38(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return unk_0x06BA26F22D42BC26(-1);
		}
		else if (func_39(iParam0))
		{
			return Global_1591201[iParam0 /*602*/].f_203.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_41(var uParam0)
{
	func_69(unk_0x17B5CC8A8615737D());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
		if (func_4(unk_0x17B5CC8A8615737D(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_21(unk_0x17B5CC8A8615737D(), uParam0->f_1, uParam0->f_10);
}

bool func_42()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

bool func_43(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_50())
		{
			return 0;
		}
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (unk_0xBC409B03D8BA213A())
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (Global_55816)
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (func_45(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	if (func_48(iParam0))
	{
		return 1;
	}
	if (func_46(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_47(iParam0, 9);
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_48(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (Global_35781 == 15)
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_53(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_52(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_52(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar1 = (360f / unk_0xBBDA792448DB5A89(iParam8));
	Var2 = { Param0 };
	Var5 = { Param0 };
	fVar8 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (unk_0x0BADBFA3B172435F((fVar8 - fVar1)) * fParam3));
	Var2.f_1 = (Var2.f_1 + (unk_0xD0FFB162F40A139C((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		Var5 = { Param0 };
		Var5.f_0 = (Var5.f_0 + (unk_0x0BADBFA3B172435F(fVar8) * fParam3));
		Var5.f_1 = (Var5.f_1 + (unk_0xD0FFB162F40A139C(fVar8) * fParam3));
		unk_0x6DCB9EA6162F40F1(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_54(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_54(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { func_20(Param3 - Param0) };
	Var3 = { func_55(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x6DCB9EA6162F40F1(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6DCB9EA6162F40F1(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x6DCB9EA6162F40F1(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6DCB9EA6162F40F1(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_55(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_56(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_41(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (unk_0x94E3E074F38DF86C() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = unk_0x4F6AD5B687FE80DC(Local_107[iParam0 /*3*/], Local_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0x20122FD3E8B8C933(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0x23E9113C762466ED(uVar1))
				{
					if (unk_0x3983CCB0D958159C(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = unk_0x94E3E074F38DF86C() + 250;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_58(int iParam0)
{
	if (!unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(uParam0)))
	{
		return 1;
	}
	if (unk_0x9020DA20CF0C5F11(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x9020DA20CF0C5F11(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x9020DA20CF0C5F11(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x9020DA20CF0C5F11(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x4555FC519F5B33E3(iParam0, 1))
	{
		if (unk_0x575D47C669B84572(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_28(uParam0))
	{
		return 0;
	}
	if (!unk_0xB92D42A6AB160A01(uParam0))
	{
		return 1;
	}
	if (unk_0xB1C3C0AA8E1A5401(uParam0))
	{
		return 1;
	}
	if (!unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(uParam0)))
	{
		return 1;
	}
	if (unk_0x03767DFC5EE2B0C6(iParam0))
	{
		return 1;
	}
	if (func_60(iParam0))
	{
		return 1;
	}
	unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var0, &Var3);
	if (unk_0xE851F22ED3518011((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0xE851F22ED3518011((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_69702)
	{
		if (!unk_0xC38F0FBE1914783C(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x4555FC519F5B33E3(iParam0, 1) && !unk_0xB92D42A6AB160A01(iParam0))
	{
		return 1;
	}
	if (!unk_0x4555FC519F5B33E3(iParam0, 1) && !unk_0xB92D42A6AB160A01(iParam0))
	{
		return 1;
	}
	if (unk_0x0324EEB10F81965F(iParam0) == joaat("btype") || unk_0x0324EEB10F81965F(iParam0) == joaat("btype3"))
	{
		if (((((func_28(unk_0x17206B315923243C(iParam0, 3, 0)) || func_28(unk_0x17206B315923243C(iParam0, 4, 0))) || func_28(unk_0x17206B315923243C(iParam0, 5, 0))) || func_28(unk_0x17206B315923243C(iParam0, 6, 0))) || func_28(unk_0x17206B315923243C(iParam0, 7, 0))) || func_28(unk_0x17206B315923243C(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0324EEB10F81965F(uParam0);
	if (func_61(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0xA13396827DE7EB7C(iParam0, 2))
		{
			return 1;
		}
		if (unk_0xA13396827DE7EB7C(iParam0, 3) && unk_0xA13396827DE7EB7C(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0xA13396827DE7EB7C(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0xA13396827DE7EB7C(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0xB92D42A6AB160A01(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0xA13396827DE7EB7C(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0xA13396827DE7EB7C(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0xA13396827DE7EB7C(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0xA13396827DE7EB7C(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0xA13396827DE7EB7C(iParam0, 3) && !unk_0xA13396827DE7EB7C(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (!unk_0xC2AFD5CFEDC8F22A(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune4"):
		case joaat("dune5"):
			return 1;
		
		default:
	}
	return 0;
}

float func_62(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Param1, iParam4);
}

void func_63()
{
	func_67(&(Local_40[0 /*24*/]), 1, "Carwash1", func_68(156), 15, "", 0, 4f);
	func_67(&(Local_40[1 /*24*/]), 1, "Carwash2", func_68(157), 15, "", 0, 4f);
	func_65(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_65(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_64(&uLocal_89, 0);
	Local_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_69702)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_65(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_20(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_66(fParam4, 0f, 360f);
}

float func_66(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_67(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25501[iVar0 /*23*/][0 /*3*/];
}

bool func_69(int iParam0)
{
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	return !unk_0xA929B2923D14E2F8(iParam0, 0);
}

void func_70()
{
	func_71(&Local_40);
	func_24(&uLocal_89);
	unk_0x921053BAF754303D();
}

void func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_72(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_72(var uParam0)
{
	*uParam0 = 0;
}

