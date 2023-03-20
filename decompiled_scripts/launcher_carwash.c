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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<24> Local_39[2];
	var uLocal_88 = 0;
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
	var uLocal_100 = -1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = 0;
	struct<3> Local_106[2];
	var uLocal_113[2] = { 0, 0 };
	int iLocal_116[2] = { 0, 0 };
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x16CDA1894CFE0781(joaat("launcher_carwash")) > 1)
	{
		unk_0x82706E6C897B0FA1();
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		unk_0x20A629A7D3DC97F2();
		unk_0xFF9F94FD851C212A(0);
	}
	else if (unk_0x2C897F101BA20806(99))
	{
		func_66();
	}
	if (Global_2621550)
	{
		if (unk_0x16CDA1894CFE0781(-949873222) == 0)
		{
			unk_0x2EDAAB9A8F7BCA0B(-949873222);
			while (!unk_0xACFDEC9C39CAD932(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0x82706E6C897B0FA1();
	}
	if (func_65(unk_0xA16EC202D9D35357()))
	{
	}
	func_59();
	while (true)
	{
		func_65(unk_0xA16EC202D9D35357());
		if (func_58(unk_0xA16EC202D9D35357(), Var2, 0) > (100f + 20f))
		{
			func_66();
		}
		bVar0 = false;
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			uVar1 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			bVar0 = (func_55(uVar1) || func_54(uVar1));
			bLocal_105 = unk_0xFFA4B855DB92C1CF(uVar1);
			func_53(bLocal_105);
		}
		iVar5 = 0;
		while (iVar5 < Local_39.f_0)
		{
			func_52(iVar5);
			iVar5++;
		}
		if (func_1(&Local_39, &uLocal_88, bVar0, 0, 1, 1424))
		{
			func_66();
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
			func_47(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_43(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_40(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x57928D9CA949E471() && uParam1->f_16 == 0))
						{
							func_39(uParam1, 6);
						}
						else if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
						{
							func_39(uParam1, 8);
						}
						else if (bParam2)
						{
							func_39(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_39(uParam1, 2);
						}
						else if (func_29() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_39(uParam1, 1);
						}
						else if (func_24())
						{
							func_39(uParam1, 7);
						}
						else
						{
							func_39(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_23(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_6);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_12(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || func_29() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_1);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_3);
			}
			if ((func_17(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_5);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_4);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) == 0)
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_11())
				{
					func_21(uParam1, uParam1->f_7);
				}
				else
				{
					func_21(uParam1, uParam1->f_8);
				}
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || func_8(iParam0[uParam1->f_12 /*24*/]))
			{
				func_39(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0xA6ED15B28077401E(2, 51);
			unk_0x4B404C739A9AFC7A(0, 101, 1);
			func_7();
			if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
			{
				func_39(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_39(uParam1, 2);
				return 0;
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !func_43(uParam1->f_16))
			{
				func_39(uParam1, 0);
				return 0;
			}
			if (Global_67066)
			{
				return 0;
			}
			if (func_4(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || func_3(unk_0xA16EC202D9D35357(), 0) != -1)
				{
					func_39(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x57928D9CA949E471() && uParam1->f_16 == 0))
			{
				func_39(uParam1, 6);
				return 0;
			}
			if (func_24())
			{
				func_39(uParam1, 7);
				return 0;
			}
			if (func_29() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_39(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_12(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
			}
			if (unk_0x2B0FFD431FD5A9FA() || unk_0xE1AFDE60BC297214())
			{
				return 0;
			}
			if (unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()))
			{
				if ((unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357()) || unk_0xEF3A70D83EA38426(unk_0xA16EC202D9D35357())) || unk_0xF5583B06E1A5A9B1(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if ((unk_0xF6E1C99D2D273678(unk_0xA16EC202D9D35357()) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xDBE30D8105A6CC0C(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x048742CFEDBEF960(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x03C806A12329A320(unk_0xA16EC202D9D35357()) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x1453F50088A91E4E(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_8(iParam0[uParam1->f_12 /*24*/]))
				{
					func_39(uParam1, 9);
				}
				else
				{
					func_39(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_23(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_39(uParam1, 0);
				return 1;
			}
			unk_0xFD1E0AEC770DAF2E(1);
			unk_0x6ACCA46B5F60314D(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 20f, 0);
			if (!unk_0x06771AF7795B3ECF((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0x19DD85EFF70867D4((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0x3EBB3CB89FC2CE55((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_7();
					if (func_65(unk_0xA16EC202D9D35357()))
					{
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !Global_68325)
						{
							func_2(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 2f, 1, 1056964608, 0, 1);
							unk_0x32B480594EF188B7(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0);
						}
					}
					unk_0xA6ED15B28077401E(2, 51);
					unk_0x19DD85EFF70867D4((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x4B404C739A9AFC7A(0, 101, 1);
					unk_0x4B404C739A9AFC7A(0, 75, 1);
					unk_0x4B404C739A9AFC7A(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x271524E4281048DC(250);
				}
				if (unk_0x3EBB3CB89FC2CE55((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0xF4C685E933068D23())
						{
							if (func_65(unk_0xA16EC202D9D35357()))
							{
								if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !Global_68325)
								{
									func_2(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 2f, 1, 1056964608, 0, 1);
									unk_0x32B480594EF188B7(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0);
								}
							}
							unk_0xA6ED15B28077401E(2, 51);
							unk_0x4B404C739A9AFC7A(0, 101, 1);
							unk_0x4B404C739A9AFC7A(0, 75, 1);
							unk_0x4B404C739A9AFC7A(0, 23, 1);
							func_7();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0xF8FDF7446A3DA9B4((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x4B404C739A9AFC7A(0, 71, 1);
	unk_0x4B404C739A9AFC7A(0, 72, 1);
	unk_0x4B404C739A9AFC7A(0, 76, 1);
	unk_0x4B404C739A9AFC7A(0, 73, 1);
	unk_0x4B404C739A9AFC7A(0, 59, 1);
	unk_0x4B404C739A9AFC7A(0, 60, 1);
	if (bParam5)
	{
		unk_0x4B404C739A9AFC7A(0, 75, 1);
	}
	unk_0x4B404C739A9AFC7A(0, 80, 1);
	unk_0x4B404C739A9AFC7A(0, 69, 1);
	unk_0x4B404C739A9AFC7A(0, 70, 1);
	unk_0x4B404C739A9AFC7A(0, 68, 1);
	unk_0x4B404C739A9AFC7A(0, 74, 1);
	unk_0x4B404C739A9AFC7A(0, 86, 1);
	unk_0x4B404C739A9AFC7A(0, 81, 1);
	unk_0x4B404C739A9AFC7A(0, 82, 1);
	unk_0x4B404C739A9AFC7A(0, 138, 1);
	unk_0x4B404C739A9AFC7A(0, 136, 1);
	unk_0x4B404C739A9AFC7A(0, 114, 1);
	unk_0x4B404C739A9AFC7A(0, 107, 1);
	unk_0x4B404C739A9AFC7A(0, 110, 1);
	unk_0x4B404C739A9AFC7A(0, 89, 1);
	unk_0x4B404C739A9AFC7A(0, 89, 1);
	unk_0x4B404C739A9AFC7A(0, 87, 1);
	unk_0x4B404C739A9AFC7A(0, 88, 1);
	unk_0x4B404C739A9AFC7A(0, 113, 1);
	unk_0x4B404C739A9AFC7A(0, 115, 1);
	unk_0x4B404C739A9AFC7A(0, 116, 1);
	unk_0x4B404C739A9AFC7A(0, 117, 1);
	unk_0x4B404C739A9AFC7A(0, 118, 1);
	unk_0x4B404C739A9AFC7A(0, 119, 1);
	unk_0x4B404C739A9AFC7A(0, 131, 1);
	unk_0x4B404C739A9AFC7A(0, 132, 1);
	unk_0x4B404C739A9AFC7A(0, 123, 1);
	unk_0x4B404C739A9AFC7A(0, 126, 1);
	unk_0x4B404C739A9AFC7A(0, 129, 1);
	unk_0x4B404C739A9AFC7A(0, 130, 1);
	unk_0x4B404C739A9AFC7A(0, 133, 1);
	unk_0x4B404C739A9AFC7A(0, 134, 1);
	unk_0x70B6991909A03810();
	if ((unk_0x09560C7DE2A384BD() - Global_29) > 500)
	{
		unk_0x7DDC5160036EE766(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x09560C7DE2A384BD();
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		if (unk_0x3545D662A0A53653(unk_0x5AF66EDEBFA76B9B(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		if (unk_0x202EF5D8203705EF(iParam0, iParam1))
		{
			uVar0 = unk_0x6ADAC08D70C79DE5(iParam0, iParam1);
			if (unk_0x538DF9E5B1DF01EB(uVar0))
			{
				if (!unk_0xE44A580B551C3645(iVar0))
				{
					iVar1 = unk_0x4350E1B7440A3560(unk_0xA609E58449080951(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x557C6E696286C67A(iVar0, iVar3))
						{
							if (unk_0xD8A521688BDBE867(iVar0, iVar3) == iParam0)
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

int func_4(bool bParam0)
{
	if (bParam0)
	{
		if (func_6())
		{
			return 1;
		}
	}
	if (func_5(14))
	{
		return 1;
	}
	return 0;
}

bool func_5(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_6()
{
	if (Global_96386)
	{
		return 1;
	}
	if (!func_5(14) && unk_0x16CDA1894CFE0781(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_7()
{
	Global_17099.f_6 = 1;
}

int func_8(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xA16EC202D9D35357();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_10(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		iVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (func_65(iVar3))
		{
			Var0 = { unk_0x1A6D58515B4120D5(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0x0A0652D7F8135EB9(iVar4) };
	if (func_9(uParam0->f_12, Var0) > unk_0xD0FFB162F40A139C(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_9(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

int func_10(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	var uVar0;
	
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		return unk_0xFDBE4265C0DBB630(uVar0, 1119092736);
	}
	return unk_0xFDBE4265C0DBB630(unk_0xA16EC202D9D35357(), 1119092736);
}

int func_12(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x06771AF7795B3ECF(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x11A809BBE3889742())
	{
		unk_0xFD1E0AEC770DAF2E(1);
		func_13(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_13(var uParam0, var uParam1)
{
	unk_0x5B4A49EA799C667F(uParam0);
	unk_0x53B64327E3305DCB(uParam1);
	unk_0x644558F3AB755120(0, 1, 1, -1);
}

int func_14(var uParam0)
{
	if (unk_0x06771AF7795B3ECF(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0x11A809BBE3889742())
	{
		return 0;
	}
	if (unk_0x9BA82E09A986BA4B(*uParam0, uParam0->f_14) || unk_0x9BA82E09A986BA4B(uParam0->f_2, uParam0->f_14))
	{
		return func_16(uParam0->f_14, uParam0->f_15);
	}
	return func_15(uParam0->f_14);
}

var func_15(var uParam0)
{
	unk_0x38DB30583B2DE025(uParam0);
	return unk_0x2DB019D515966DF9(0);
}

var func_16(var uParam0, var uParam1)
{
	unk_0x38DB30583B2DE025(uParam0);
	unk_0x53B64327E3305DCB(uParam1);
	return unk_0x2DB019D515966DF9(0);
}

bool func_17(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			return 1;
		}
		if (func_3(unk_0xA16EC202D9D35357(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_20(unk_0xA16EC202D9D35357(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_18(uParam0->f_16, 2f) };
	return !unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_18(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_19(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_19(struct<3> Param0)
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

bool func_20(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_21(var uParam0, var uParam1)
{
	if (unk_0x06771AF7795B3ECF(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x11A809BBE3889742())
	{
		unk_0xFD1E0AEC770DAF2E(1);
		func_22(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_22(var uParam0)
{
	unk_0x5B4A49EA799C667F(uParam0);
	unk_0x644558F3AB755120(0, 1, 1, -1);
}

void func_23(var uParam0)
{
	if (func_14(uParam0))
	{
		unk_0xFD1E0AEC770DAF2E(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_24()
{
	int iVar0;
	
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
	if (unk_0x042EE007A41C88D4(iVar0))
	{
		return 1;
	}
	if (func_28(iVar0))
	{
		return 1;
	}
	if (func_25(iVar0, 3))
	{
		return 1;
	}
	return !unk_0xECFECDAD51A6184F(iVar0, 0);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_26(iParam0))
	{
		iVar0 = 0;
		if (unk_0x46BB957748356042(iParam0, 0, 0) && unk_0x46BB957748356042(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x46BB957748356042(iParam0, 4, 0) && unk_0x46BB957748356042(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0x46BB957748356042(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0x46BB957748356042(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0x46BB957748356042(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0x46BB957748356042(iParam0, 5, 0))
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

int func_26(int iParam0)
{
	if (func_27(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (!unk_0x042EE007A41C88D4(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xE44A580B551C3645(iParam0))
		{
			return 1;
		}
		else if (!unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (!unk_0x042EE007A41C88D4(iParam0))
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

int func_29()
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		return func_36(unk_0x1788E93557766241());
	}
	switch (func_31())
	{
		case 2:
			return func_30(2);
		
		case 0:
			return func_30(0);
		
		case 1:
			return func_30(1);
		
		default:
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_51933[iParam0];
}

int func_31()
{
	func_32();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_32()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_35(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_34(unk_0xA16EC202D9D35357());
			if (func_33(iVar0) && (!func_5(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_33(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = func_37(iParam0);
	return uVar0;
}

int func_37(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return unk_0xDBED60E4A98E4A0B(-1);
		}
		else if (func_38(iParam0))
		{
			return Global_1583725[iParam0 /*334*/].f_188.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
	}
	return 1;
}

void func_39(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_23(uParam0);
}

bool func_40(var uParam0)
{
	func_65(unk_0xA16EC202D9D35357());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			return 0;
		}
		if (func_3(unk_0xA16EC202D9D35357(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_20(unk_0xA16EC202D9D35357(), uParam0->f_1, uParam0->f_10);
}

bool func_41()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

bool func_42(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

int func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_46())
		{
			return 0;
		}
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (unk_0xE1AFDE60BC297214())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (Global_54752)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_45(0))
	{
		return 0;
	}
	if (func_44(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

int func_44(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_45(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	return 1;
}

void func_47(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_49(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_48(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_48(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
		unk_0x96EE70DD1AB30DAB(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_50(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_50(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var0 = { func_19(Param3 - Param0) };
	Var3 = { func_51(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x96EE70DD1AB30DAB(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x96EE70DD1AB30DAB(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x96EE70DD1AB30DAB(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x96EE70DD1AB30DAB(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_51(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_52(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_40(&(Local_39[iParam0 /*24*/])))
	{
		Local_39[iParam0 /*24*/].f_8 = 0;
		iLocal_116[iParam0] = 0;
		return;
	}
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		Local_39[iParam0 /*24*/].f_8 = 0;
		iLocal_116[iParam0] = 0;
		return;
	}
	if (iLocal_116[iParam0] == 0)
	{
		if (unk_0x09560C7DE2A384BD() > uLocal_113[iParam0])
		{
			iLocal_116[iParam0] = unk_0xFD3EA39F63B93AB8(Local_106[iParam0 /*3*/], Local_106[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0x65595DB38D0F502A(iLocal_116[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_39[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0x538DF9E5B1DF01EB(uVar1))
				{
					if (unk_0x9FF5D51C24AD2308(iVar1))
					{
						Local_39[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_116[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_116[iParam0] = 0;
		}
		uLocal_113[iParam0] = unk_0x09560C7DE2A384BD() + 250;
	}
}

void func_53(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_54(int iParam0)
{
	if (!unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(uParam0)))
	{
		return 1;
	}
	if (unk_0xD13672BF2D3C4CB1(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xD13672BF2D3C4CB1(iParam0, 1))
	{
		return 1;
	}
	if (unk_0xD13672BF2D3C4CB1(iParam0, 2))
	{
		return 1;
	}
	if (unk_0xD13672BF2D3C4CB1(iParam0, 3))
	{
		return 1;
	}
	if (unk_0xE19742BCB95B6E28(iParam0, 1))
	{
		if (unk_0xBE52DF6606B79B2D(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_27(uParam0))
	{
		return 0;
	}
	if (!unk_0xFFA4B855DB92C1CF(uParam0))
	{
		return 1;
	}
	if (unk_0x16AAB2FABA8773E7(uParam0))
	{
		return 1;
	}
	if (!unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(uParam0)))
	{
		return 1;
	}
	if (unk_0x042EE007A41C88D4(iParam0))
	{
		return 1;
	}
	if (func_56(iParam0))
	{
		return 1;
	}
	unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam0), &Var0, &Var3);
	if (unk_0x3545D662A0A53653((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0x3545D662A0A53653((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_68325)
	{
		if (!unk_0xC7402AE8FD6AACA2(iParam0))
		{
			return 0;
		}
	}
	if (unk_0xE19742BCB95B6E28(iParam0, 1) && !unk_0xFFA4B855DB92C1CF(iParam0))
	{
		return 1;
	}
	if (!unk_0xE19742BCB95B6E28(iParam0, 1) && !unk_0xFFA4B855DB92C1CF(iParam0))
	{
		return 1;
	}
	if (unk_0xA609E58449080951(iParam0) == joaat("btype"))
	{
		if (func_27(unk_0xD8A521688BDBE867(iParam0, 3)) || func_27(unk_0xD8A521688BDBE867(iParam0, 4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA609E58449080951(uParam0);
	if (func_57(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0x5624226E4F913C53(iParam0, 2))
		{
			return 1;
		}
		if (unk_0x5624226E4F913C53(iParam0, 3) && unk_0x5624226E4F913C53(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0x5624226E4F913C53(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0x5624226E4F913C53(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0xFFA4B855DB92C1CF(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0x5624226E4F913C53(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0x5624226E4F913C53(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0x5624226E4F913C53(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0x5624226E4F913C53(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0x5624226E4F913C53(iParam0, 3) && !unk_0x5624226E4F913C53(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
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
			return 1;
		
		default:
	}
	if (iParam0 == unk_0xB793F1A0B6CC4AE1("ratloader2"))
	{
		return 1;
	}
	if (!unk_0xD548A98EDA33C15A(iParam0))
	{
		return 1;
	}
	if (unk_0x1D6BD62DDF942BDF() > 0)
	{
		if (iParam0 == unk_0xB793F1A0B6CC4AE1("bifta"))
		{
			return 1;
		}
		if (iParam0 == unk_0xB793F1A0B6CC4AE1("kalahari"))
		{
			return 1;
		}
	}
	return 0;
}

float func_58(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Param1, iParam4);
}

void func_59()
{
	func_63(&(Local_39[0 /*24*/]), 1, "Carwash1", func_64(155), 15, "", 0, 4f);
	func_63(&(Local_39[1 /*24*/]), 1, "Carwash2", func_64(156), 15, "", 0, 4f);
	func_61(&(Local_39[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_61(&(Local_39[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_60(&uLocal_88, 0);
	Local_106[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_106[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_60(var uParam0, int iParam1)
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
	if (!Global_68325)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_61(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_19(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_62(fParam4, 0f, 360f);
}

float func_62(float fParam0, float fParam1, float fParam2)
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

void func_63(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
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

Vector3 func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_24750[iVar0 /*23*/][0 /*3*/];
}

bool func_65(int iParam0)
{
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	return !unk_0xE44A580B551C3645(iParam0);
}

void func_66()
{
	func_67(&Local_39);
	func_23(&uLocal_88);
	unk_0x82706E6C897B0FA1();
}

void func_67(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_68(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_68(var uParam0)
{
	*uParam0 = 0;
}

