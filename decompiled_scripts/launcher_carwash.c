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
	if (unk_0xD32535FA4397160F(joaat("launcher_carwash")) > 1)
	{
		unk_0x7C3AA2D27E16E2AD();
	}
	if (unk_0x0E063DDE8855EC52())
	{
		unk_0x60F2C6DC397A6833();
		unk_0xF160EBCA8FFA0E2A(0);
	}
	else if (unk_0x524AF15206846700(99))
	{
		func_69();
	}
	if (Global_2621550)
	{
		if (unk_0xD32535FA4397160F(-949873222) == 0)
		{
			unk_0x896F917139316653(-949873222);
			while (!unk_0xD4D2A6AF6A1D75DC(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0x7C3AA2D27E16E2AD();
	}
	if (func_68(unk_0x27D769C59BC9D030()))
	{
	}
	func_62();
	while (true)
	{
		func_68(unk_0x27D769C59BC9D030());
		if (func_61(unk_0x27D769C59BC9D030(), Var2, 0) > (100f + 20f))
		{
			func_69();
		}
		bVar0 = false;
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			uVar1 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			bVar0 = (func_58(uVar1) || func_57(uVar1));
			bLocal_106 = unk_0x741E9FE4E5FE07D8(uVar1);
			func_56(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40.f_0)
		{
			func_55(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_69();
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
			func_50(iParam0[iVar0 /*24*/]);
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
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x9332944411A91CF6() && uParam1->f_16 == 0))
						{
							func_39(uParam1, 6);
						}
						else if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
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
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) == 0)
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
			unk_0xDF3F6D6CDD523546(2, 51);
			unk_0xCFF471245AFEEDCE(0, 101, 1);
			func_7();
			if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
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
			if (Global_68058)
			{
				return 0;
			}
			if (func_4(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) || func_3(unk_0x27D769C59BC9D030(), 0) != -1)
				{
					func_39(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x9332944411A91CF6() && uParam1->f_16 == 0))
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
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && !unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
			}
			if (unk_0x1E114237D972903B() || unk_0xDEE9BD76C5A6525E())
			{
				return 0;
			}
			if (unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()))
			{
				if ((unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030()) || unk_0x02AFB3CDBA55341D(unk_0x27D769C59BC9D030())) || unk_0xD71487833C90B456(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if ((unk_0xA7EEDB617B2F8DF1(unk_0x27D769C59BC9D030()) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x8D1E4231095B313B(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x58D91178F8617B11(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xDAA1E30B3CC41528(unk_0x27D769C59BC9D030()) || unk_0x27B3DE54D214014B(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0x117D586920E8F7BA(2, 51) && uParam1->f_9 == 1)
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
			unk_0x5BD150B52CE8D356(1);
			unk_0x8474F03FCE36E004(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 20f, 0);
			if (!unk_0x75CB9E30BA492FF0((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0xA51826E3518111A3((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0x9A8E9A1E029E9A5A((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_7();
					if (func_68(unk_0x27D769C59BC9D030()))
					{
						if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && !Global_69489)
						{
							func_2(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0x5CD1803153799845(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0);
						}
					}
					unk_0xDF3F6D6CDD523546(2, 51);
					unk_0xA51826E3518111A3((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0xCFF471245AFEEDCE(0, 101, 1);
					unk_0xCFF471245AFEEDCE(0, 75, 1);
					unk_0xCFF471245AFEEDCE(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x4E63F662FDE672C3(250);
				}
				if (unk_0x9A8E9A1E029E9A5A((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x3934E959DB2478D3())
						{
							if (func_68(unk_0x27D769C59BC9D030()))
							{
								if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && !Global_69489)
								{
									func_2(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0x5CD1803153799845(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0);
								}
							}
							unk_0xDF3F6D6CDD523546(2, 51);
							unk_0xCFF471245AFEEDCE(0, 101, 1);
							unk_0xCFF471245AFEEDCE(0, 75, 1);
							unk_0xCFF471245AFEEDCE(0, 23, 1);
							func_7();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0xABAEB0389A1F036F((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xCFF471245AFEEDCE(0, 71, 1);
	unk_0xCFF471245AFEEDCE(0, 72, 1);
	unk_0xCFF471245AFEEDCE(0, 76, 1);
	unk_0xCFF471245AFEEDCE(0, 73, 1);
	unk_0xCFF471245AFEEDCE(0, 59, 1);
	unk_0xCFF471245AFEEDCE(0, 60, 1);
	if (bParam5)
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 80, 1);
	if (!bParam6)
	{
		unk_0xCFF471245AFEEDCE(0, 69, 1);
		unk_0xCFF471245AFEEDCE(0, 70, 1);
		unk_0xCFF471245AFEEDCE(0, 68, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 74, 1);
	unk_0xCFF471245AFEEDCE(0, 86, 1);
	unk_0xCFF471245AFEEDCE(0, 81, 1);
	unk_0xCFF471245AFEEDCE(0, 82, 1);
	unk_0xCFF471245AFEEDCE(0, 138, 1);
	unk_0xCFF471245AFEEDCE(0, 136, 1);
	unk_0xCFF471245AFEEDCE(0, 114, 1);
	unk_0xCFF471245AFEEDCE(0, 107, 1);
	unk_0xCFF471245AFEEDCE(0, 110, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 87, 1);
	unk_0xCFF471245AFEEDCE(0, 88, 1);
	unk_0xCFF471245AFEEDCE(0, 113, 1);
	unk_0xCFF471245AFEEDCE(0, 115, 1);
	unk_0xCFF471245AFEEDCE(0, 116, 1);
	unk_0xCFF471245AFEEDCE(0, 117, 1);
	unk_0xCFF471245AFEEDCE(0, 118, 1);
	unk_0xCFF471245AFEEDCE(0, 119, 1);
	unk_0xCFF471245AFEEDCE(0, 131, 1);
	unk_0xCFF471245AFEEDCE(0, 132, 1);
	unk_0xCFF471245AFEEDCE(0, 123, 1);
	unk_0xCFF471245AFEEDCE(0, 126, 1);
	unk_0xCFF471245AFEEDCE(0, 129, 1);
	unk_0xCFF471245AFEEDCE(0, 130, 1);
	unk_0xCFF471245AFEEDCE(0, 133, 1);
	unk_0xCFF471245AFEEDCE(0, 134, 1);
	unk_0xD2707D96EC4B48D3();
	if ((unk_0xA0F74982C6AAA9D4() - Global_29) > 500)
	{
		unk_0x29D71D9710F2540E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA0F74982C6AAA9D4();
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (unk_0x43698C98CC255554(unk_0xECC01072E61D2F3A(iParam0)) <= fParam3)
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
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0x9A4E2270C2271219(iParam0, iParam1))
		{
			uVar0 = unk_0xD9FFE8E1642C81E2(iParam0, iParam1);
			if (unk_0xD2CFFE76B625AE55(uVar0))
			{
				if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
				{
					iVar1 = unk_0xAAD0C2C6698FC5AA(unk_0x946C63BD9EF05437(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x32C6487B93CCAF4F(iVar0, iVar3))
						{
							if (unk_0x9297C590C99228DC(iVar0, iVar3) == iParam0)
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
	return Global_35711 == iParam0;
}

int func_6()
{
	if (Global_100101)
	{
		return 1;
	}
	if (!func_5(14) && unk_0xD32535FA4397160F(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_7()
{
	Global_17118.f_6 = 1;
}

int func_8(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x27D769C59BC9D030();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_10(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		iVar3 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		if (func_68(iVar3))
		{
			Var0 = { unk_0x9A98AE1D9D8DEF06(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0xE7669FB0FEEAD3DD(iVar4) };
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
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		uVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		return unk_0xB2D89B2FA7AD008C(uVar0, 1119092736);
	}
	return unk_0xB2D89B2FA7AD008C(unk_0x27D769C59BC9D030(), 1119092736);
}

int func_12(var uParam0, var uParam1, var uParam2)
{
	if (unk_0x75CB9E30BA492FF0(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x46768B1495288824())
	{
		unk_0x5BD150B52CE8D356(1);
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
	unk_0x3432AC8623AF4EAC(uParam0);
	unk_0x90805938ADF0F45C(uParam1);
	unk_0x9785EE0D78241684(0, 1, 1, -1);
}

int func_14(var uParam0)
{
	if (unk_0x75CB9E30BA492FF0(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0x46768B1495288824())
	{
		return 0;
	}
	if (unk_0xC1C5B83BB6719C6C(*uParam0, uParam0->f_14) || unk_0xC1C5B83BB6719C6C(uParam0->f_2, uParam0->f_14))
	{
		return func_16(uParam0->f_14, uParam0->f_15);
	}
	return func_15(uParam0->f_14);
}

var func_15(var uParam0)
{
	unk_0x66F753896FC4EEC3(uParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

var func_16(var uParam0, var uParam1)
{
	unk_0x66F753896FC4EEC3(uParam0);
	unk_0x90805938ADF0F45C(uParam1);
	return unk_0xF2DBEB09EBAED1D6(0);
}

bool func_17(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			return 1;
		}
		if (func_3(unk_0x27D769C59BC9D030(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_20(unk_0x27D769C59BC9D030(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_18(uParam0->f_16, 2f) };
	return !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
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
	return unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_21(var uParam0, var uParam1)
{
	if (unk_0x75CB9E30BA492FF0(uParam1))
	{
		return 0;
	}
	if (func_14(uParam0) || !unk_0x46768B1495288824())
	{
		unk_0x5BD150B52CE8D356(1);
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
	unk_0x3432AC8623AF4EAC(uParam0);
	unk_0x9785EE0D78241684(0, 1, 1, -1);
}

void func_23(var uParam0)
{
	if (func_14(uParam0))
	{
		unk_0x5BD150B52CE8D356(1);
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
	
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
	if (unk_0xFA7888B344869306(iVar0))
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
	return !unk_0x0B4DDB992C7BCF57(iVar0, 0);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_26(iParam0))
	{
		iVar0 = 0;
		if (unk_0xAB191CE9D0342508(iParam0, 0, 0) && unk_0xAB191CE9D0342508(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xAB191CE9D0342508(iParam0, 4, 0) && unk_0xAB191CE9D0342508(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0xAB191CE9D0342508(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xAB191CE9D0342508(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xAB191CE9D0342508(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xAB191CE9D0342508(iParam0, 5, 0))
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
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (!unk_0xFA7888B344869306(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (!unk_0xFA7888B344869306(iParam0))
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
	if (unk_0x0E063DDE8855EC52())
	{
		return func_36(unk_0x4D29100D094E5511());
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
	return Global_52923[iParam0];
}

int func_31()
{
	func_32();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_35(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_34(unk_0x27D769C59BC9D030());
			if (func_33(iVar0) && (!func_5(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_33(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
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
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return unk_0xAAD9B5BADB2DE4F5(-1);
		}
		else if (func_38(iParam0))
		{
			return Global_1587523[iParam0 /*444*/].f_195.f_3;
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
		return unk_0xF426A5DE932B3BEE(Global_2428492.f_1, iParam0);
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
	func_68(unk_0x27D769C59BC9D030());
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
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			return 0;
		}
		if (func_3(unk_0x27D769C59BC9D030(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_20(unk_0x27D769C59BC9D030(), uParam0->f_1, uParam0->f_10);
}

bool func_41()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

bool func_42(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_43(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_49())
		{
			return 0;
		}
	}
	if (unk_0x1E114237D972903B())
	{
		return 0;
	}
	if (unk_0xDEE9BD76C5A6525E())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (Global_55743)
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_44(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	if (func_47(iParam0))
	{
		return 1;
	}
	if (func_45(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_46(iParam0, 9);
	}
	return 0;
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

int func_47(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 0);
	}
	return 0;
}

int func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	if (Global_35711 == 15)
	{
		return 0;
	}
	return 1;
}

void func_50(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_52(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_51(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_51(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
		unk_0x777175C2C7FD5EA0(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_53(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_53(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var3 = { func_54(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x777175C2C7FD5EA0(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x777175C2C7FD5EA0(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x777175C2C7FD5EA0(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x777175C2C7FD5EA0(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_54(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_55(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_40(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (unk_0xA0F74982C6AAA9D4() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = unk_0xD79AADD74A1DA413(Local_107[iParam0 /*3*/], Local_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0xF196E47C22823C63(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0xD2CFFE76B625AE55(uVar1))
				{
					if (unk_0x8F8858152A9B9959(iVar1))
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
		uLocal_114[iParam0] = unk_0xA0F74982C6AAA9D4() + 250;
	}
}

void func_56(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_57(int iParam0)
{
	if (!unk_0xA8059F869DFB2747(unk_0x946C63BD9EF05437(uParam0)))
	{
		return 1;
	}
	if (unk_0x2FD1F57638D94898(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x2FD1F57638D94898(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x2FD1F57638D94898(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x2FD1F57638D94898(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x1BCE164A254176FA(iParam0, 1))
	{
		if (unk_0xD3A88CAE99C338A3(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_27(uParam0))
	{
		return 0;
	}
	if (!unk_0x741E9FE4E5FE07D8(uParam0))
	{
		return 1;
	}
	if (unk_0x72F060E36BC86756(uParam0))
	{
		return 1;
	}
	if (!unk_0xA8059F869DFB2747(unk_0x946C63BD9EF05437(uParam0)))
	{
		return 1;
	}
	if (unk_0xFA7888B344869306(iParam0))
	{
		return 1;
	}
	if (func_59(iParam0))
	{
		return 1;
	}
	unk_0x3DE83953A8E7C5D3(unk_0x946C63BD9EF05437(iParam0), &Var0, &Var3);
	if (unk_0x43698C98CC255554((Var3.f_0 - Var0.f_0)) > 3.4f)
	{
		return 1;
	}
	if (unk_0x43698C98CC255554((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_69489)
	{
		if (!unk_0xFB1CEF9E7943CFF5(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x1BCE164A254176FA(iParam0, 1) && !unk_0x741E9FE4E5FE07D8(iParam0))
	{
		return 1;
	}
	if (!unk_0x1BCE164A254176FA(iParam0, 1) && !unk_0x741E9FE4E5FE07D8(iParam0))
	{
		return 1;
	}
	if (unk_0x946C63BD9EF05437(iParam0) == joaat("btype") || unk_0x946C63BD9EF05437(iParam0) == joaat("btype3"))
	{
		if (((((func_27(unk_0x9297C590C99228DC(iParam0, 3)) || func_27(unk_0x9297C590C99228DC(iParam0, 4))) || func_27(unk_0x9297C590C99228DC(iParam0, 5))) || func_27(unk_0x9297C590C99228DC(iParam0, 6))) || func_27(unk_0x9297C590C99228DC(iParam0, 7))) || func_27(unk_0x9297C590C99228DC(iParam0, 8)))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x946C63BD9EF05437(uParam0);
	if (func_60(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0x3D866A165E63B4FE(iParam0, 2))
		{
			return 1;
		}
		if (unk_0x3D866A165E63B4FE(iParam0, 3) && unk_0x3D866A165E63B4FE(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0x3D866A165E63B4FE(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0x3D866A165E63B4FE(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x741E9FE4E5FE07D8(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0x3D866A165E63B4FE(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0x3D866A165E63B4FE(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0x3D866A165E63B4FE(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0x3D866A165E63B4FE(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0x3D866A165E63B4FE(iParam0, 3) && !unk_0x3D866A165E63B4FE(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
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
		case joaat("limo2"):
			return 1;
		
		default:
	}
	if (iParam0 == unk_0x70ABFF261710305D("ratloader2"))
	{
		return 1;
	}
	if (!unk_0xA8059F869DFB2747(iParam0))
	{
		return 1;
	}
	if (unk_0xF91F65A88EC73320() > 0)
	{
		if (iParam0 == unk_0x70ABFF261710305D("bifta"))
		{
			return 1;
		}
		if (iParam0 == unk_0x70ABFF261710305D("kalahari"))
		{
			return 1;
		}
	}
	return 0;
}

float func_61(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

void func_62()
{
	func_66(&(Local_40[0 /*24*/]), 1, "Carwash1", func_67(156), 15, "", 0, 4f);
	func_66(&(Local_40[1 /*24*/]), 1, "Carwash2", func_67(157), 15, "", 0, 4f);
	func_64(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_64(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_63(&uLocal_89, 0);
	Local_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_63(var uParam0, int iParam1)
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
	if (!Global_69489)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_64(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_19(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_65(fParam4, 0f, 360f);
}

float func_65(float fParam0, float fParam1, float fParam2)
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

void func_66(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
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

Vector3 func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25433[iVar0 /*23*/][0 /*3*/];
}

bool func_68(int iParam0)
{
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	return !unk_0x2006A8C1BA2AFE80(iParam0, 0);
}

void func_69()
{
	func_70(&Local_40);
	func_23(&uLocal_89);
	unk_0x7C3AA2D27E16E2AD();
}

void func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_71(var uParam0)
{
	*uParam0 = 0;
}

