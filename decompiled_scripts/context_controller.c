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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	struct<4> Local_57 = { 0, 0, 0, 0 } ;
	struct<4> Local_61 = { 0, 0, 0, 0 } ;
	int iLocal_65 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	unk_0x9243BAC96D64C050();
	iVar0 = 0;
	iVar1 = iVar0;
	unk_0xC1B1E9A034A63A62(0);
	Global_35719 = 0;
	func_29();
	StringCopy(&Global_35720, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_68067;
	while (true)
	{
		if (Global_68067)
		{
			func_26();
		}
		else
		{
			func_24();
		}
		func_18();
		if (Global_68067 != iVar8)
		{
			func_17();
			func_29();
			iVar2 = -1;
			iVar8 = Global_68067;
			while (unk_0xD9D2CFFF49FAB35F())
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
		}
		if (Global_35725)
		{
			if (Global_35727 > -1)
			{
				if (!Global_35609[Global_35727 /*18*/].f_5)
				{
					if (!func_15(Global_35727, 1))
					{
						Global_35727 = -1;
					}
				}
			}
		}
		if (func_11())
		{
			iVar2 = -1;
			func_17();
		}
		if (iVar2 > -1)
		{
			if (!Global_35725)
			{
				if (Global_35727 != iVar2)
				{
					if (func_10(Global_35727))
					{
						func_17();
						if (!Global_35609[iVar2 /*18*/].f_4 && Global_35609[iVar2 /*18*/])
						{
							if (!func_11())
							{
								if (!Global_35609[iVar2 /*18*/].f_6)
								{
									if (!Global_35609[iVar2 /*18*/].f_5)
									{
										if (!Global_35609[iVar2 /*18*/].f_11)
										{
											func_9(Global_35609[iVar2 /*18*/].f_7);
										}
										else
										{
											func_8(Global_35609[iVar2 /*18*/].f_7, Global_35609[iVar2 /*18*/].f_12);
										}
										Global_35727 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_17();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_7();
				if (unk_0x648EE3E7F38877DD(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_11())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0x580417101DDB492F(2, 51))
						{
							Global_35609[iVar2 /*18*/].f_3 = 1;
							Global_35609[iVar2 /*18*/].f_16 = 0;
							iVar7 = Global_35609[iVar2 /*18*/].f_1;
							iVar0 = 1;
							Global_35718 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0x3317DEDB88C95038(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), true))
						{
							if (unk_0x997ABD671D25CA0B(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false))
							{
								if (unk_0x1CEA6BFDF248E5D9(0, 101))
								{
									bVar5 = true;
									unk_0xFE99B66D079CF6BC(0, 101, true);
								}
								if (unk_0x1CEA6BFDF248E5D9(0, 74))
								{
									bVar4 = true;
									unk_0xFE99B66D079CF6BC(0, 74, true);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x351220255D64C155(0, 101, true);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x351220255D64C155(0, 74, true);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_6() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (unk_0x83666F9FB8FEBD4B() > 5000)
					{
						Global_35609[iVar2 /*18*/].f_6 = 1;
						iVar0 = 0;
					}
					else if (func_5(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_35609[iVar2 /*18*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_35609[iVar2 /*18*/].f_6 || Global_35609[iVar2 /*18*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_35718)
				{
					func_17();
				}
				if (unk_0x580417101DDB492F(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_35609[iVar2 /*18*/].f_16 = 0;
					}
				}
				if (Global_35719)
				{
					Global_35719 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_35609[iVar2 /*18*/].f_3 || Global_35609[iVar2 /*18*/].f_6))
					{
						Global_35719 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_35609[iVar2 /*18*/].f_6 || Global_35609[iVar2 /*18*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0xFE99B66D079CF6BC(0, 46, true);
			unk_0xFE99B66D079CF6BC(0, 54, true);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			unk_0xC1B1E9A034A63A62(0);
			iVar6 = 0;
		}
		func_4();
		func_2(&iVar2);
		Global_35724 = 0;
		Global_35725 = 0;
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!bLocal_55)
	{
		return;
	}
	if (bLocal_56)
	{
		unk_0x8509B634FBE7DA11(&Local_57);
		unk_0xC63CD5D2920ACBE7(&Global_35720);
		unk_0xC63CD5D2920ACBE7(&Local_61);
		unk_0x238FFE5C7B0498A6(0, false, true, 50);
	}
	else
	{
		unk_0x8509B634FBE7DA11(&Local_57);
		unk_0xC63CD5D2920ACBE7(&Global_35720);
		unk_0x238FFE5C7B0498A6(0, false, true, 50);
	}
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] && Global_35609[iVar0 /*18*/].f_3)
		{
			if (Global_35609[iVar0 /*18*/].f_17 != 0)
			{
				if (!unk_0x46E9AE36D8FA6417(Global_35609[iVar0 /*18*/].f_17))
				{
					if (*iParam0 > -1)
					{
						func_3();
					}
					Global_35609[iVar0 /*18*/] = 0;
					Global_35609[iVar0 /*18*/].f_17 = 0;
					Global_35609[iVar0 /*18*/] = 0;
					Global_35609[iVar0 /*18*/].f_3 = 0;
					Global_35609[iVar0 /*18*/].f_4 = 0;
					Global_35609[iVar0 /*18*/].f_2 = 0;
					Global_35609[iVar0 /*18*/].f_6 = 0;
					Global_35609[iVar0 /*18*/].f_5 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_3()
{
	if (Global_35727 != -1 || bLocal_55)
	{
		bLocal_55 = false;
		Global_35727 = -1;
	}
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/].f_6)
		{
			if (iVar0 == Global_35727)
			{
				func_17();
			}
			Global_35609[iVar0 /*18*/].f_17 = 0;
			Global_35609[iVar0 /*18*/] = 0;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = 0;
			Global_35609[iVar0 /*18*/].f_6 = 0;
			Global_35609[iVar0 /*18*/].f_5 = 0;
			Global_35609[iVar0 /*18*/].f_1 = -1;
		}
		iVar0++;
	}
}

int func_5(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_35609[iParam0 /*18*/].f_4)
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1)
		{
			if (Global_35609[iVar0 /*18*/].f_3 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_17();
	}
	return iVar1;
}

int func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/])
		{
			if (Global_35609[iVar0 /*18*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_35609[iVar0 /*18*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_8(struct<4> Param0, struct<4> Param4)
{
	Local_57 = { Param0 };
	Local_61 = { Param4 };
	bLocal_55 = true;
	bLocal_56 = true;
}

void func_9(struct<4> Param0)
{
	Local_57 = { Param0 };
	bLocal_55 = true;
	bLocal_56 = false;
}

int func_10(int iParam0)
{
	if (Global_87118 && Global_87117)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_15(iParam0, 1) || bLocal_55)
		{
			return 1;
		}
	}
	if (unk_0x4D79439A6B55AC67() && !unk_0x214CD562A939246A())
	{
		return 0;
	}
	return 1;
}

int func_11()
{
	if (Global_66880)
	{
		return 1;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 1;
	}
	if (func_14(0))
	{
		return 1;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 1;
	}
	if (Global_35724)
	{
		return 1;
	}
	if (unk_0xBC4C9EA5391ECC0D(19))
	{
		return 1;
	}
	if (func_13(1))
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 1;
	}
	if (func_12(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_12(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

bool func_13(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_14(int iParam0)
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

bool func_15(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_16(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_35609[iVar0 /*18*/].f_5)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_35609[iVar0 /*18*/].f_11)
	{
		unk_0x0A24DA3A41B718F5(&(Global_35609[iVar0 /*18*/].f_7));
		unk_0xC63CD5D2920ACBE7(&Global_35720);
		bVar1 = unk_0x10BDDBFC529428DD(0);
	}
	else
	{
		unk_0x0A24DA3A41B718F5(&(Global_35609[iVar0 /*18*/].f_7));
		unk_0xC63CD5D2920ACBE7(&Global_35720);
		unk_0xC63CD5D2920ACBE7(&(Global_35609[iVar0 /*18*/].f_12));
		bVar1 = unk_0x10BDDBFC529428DD(0);
	}
	return bVar1;
}

int func_16(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17()
{
	func_3();
	Global_35727 = -1;
}

void func_18()
{
	if (!unk_0xD9D2CFFF49FAB35F() && !Global_66880)
	{
		if (func_23(0))
		{
			if (!unk_0xCA042B6957743895(&(Global_2427935.f_654.f_12)))
			{
				func_22();
				func_19(6);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_66889 = iParam0;
	switch (Global_66889)
	{
		case 3:
			Global_66887 = 0;
			break;
		
		case 4:
			Global_66887 = 3;
			break;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_68067 && func_21())
	{
		return;
	}
	if (!Global_68067 && func_20())
	{
		return;
	}
	if (!unk_0xE6CC9F3BA0FB9EF1("appInternet"))
	{
		unk_0x6EB5F71AA68F2E8E("appInternet");
	}
	while (!unk_0xE6CC9F3BA0FB9EF1("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0xC90D2DCACD56184C("appInternet");
}

var func_20()
{
	return Global_66881;
}

var func_21()
{
	return Global_1681499;
}

void func_22()
{
	Global_2427935.f_654.f_28 = 0;
}

bool func_23(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2427935.f_654.f_28 && unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A()) == Global_2427935.f_654.f_31);
	}
	return Global_2427935.f_654.f_28;
}

void func_24()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_51747[iVar1] < 0)
		{
			Global_51747[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_25(0);
		func_25(1);
		func_25(2);
	}
}

void func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_26()
{
	struct<13> Var0;
	
	if (Global_1572889 != -1)
	{
		Var0.f_0 = Global_1572890[0];
		Var0.f_1 = Global_1572890[1];
		Var0.f_2 = Global_1572890[2];
		Var0.f_3 = Global_1572890[3];
		Var0.f_4 = Global_1572890[4];
		Var0.f_5 = Global_1572890[5];
		Var0.f_6 = Global_1572890[6];
		Var0.f_7 = Global_1572890[7];
		Var0.f_8 = Global_1572890[8];
		Var0.f_9 = Global_1572890[9];
		Var0.f_10 = Global_1572890[10];
		Var0.f_11 = Global_1572890[11];
		Var0.f_12 = Global_1572890[12];
		if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
		{
			if (!iLocal_65)
			{
				if (unk_0x9F0C0A981D73FA56(&Var0))
				{
					iLocal_65 = 1;
				}
			}
			if (iLocal_65)
			{
				if (unk_0xB071E27958EF4CF0())
				{
				}
				else
				{
					if (unk_0xFD00798DBA7523DD())
					{
						StringCopy(&(Global_2097152[func_28() /*8053*/].f_7876.f_18[Global_1572889 /*6*/]), unk_0x426141162EBE5CDB(&Var0), 24);
					}
					Global_1572889 = -1;
					iLocal_65 = 0;
				}
			}
		}
		else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
		{
			if (func_27(Var0))
			{
				StringCopy(&(Global_2097152[func_28() /*8053*/].f_7876.f_18[Global_1572889 /*6*/]), unk_0x426141162EBE5CDB(&Var0), 24);
			}
			Global_1572889 = -1;
			iLocal_65 = 0;
		}
		else
		{
			if (func_27(Var0))
			{
				StringCopy(&(Global_2097152[func_28() /*8053*/].f_7876.f_18[Global_1572889 /*6*/]), unk_0xC82630132081BB6F(&Var0), 24);
			}
			Global_1572889 = -1;
			iLocal_65 = 0;
		}
	}
}

bool func_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6F79B93B0A8E4133(&uParam0, 13);
}

int func_28()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_29()
{
	int iVar0;
	
	Global_35718 = 0;
	Global_35724 = 0;
	Global_35725 = 0;
	Global_35726 = 1;
	Global_35727 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_35609[iVar0 /*18*/] = 0;
		iVar0++;
	}
}

