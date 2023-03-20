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
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	struct<4> Local_87 = { 0, 0, 0, 0 } ;
	struct<4> Local_91 = { 0, 0, 0, 0 } ;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
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
	if (unk_0x16CDA1894CFE0781(joaat("context_controller")) > 1)
	{
		unk_0x82706E6C897B0FA1();
	}
	unk_0x20A629A7D3DC97F2();
	iVar0 = 0;
	iVar1 = iVar0;
	unk_0xC1B1E9A034A63A62(0);
	Global_35731 = 0;
	func_31();
	StringCopy(&Global_35732, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_68325;
	while (true)
	{
		if (Global_68325)
		{
			func_28();
		}
		else
		{
			func_26();
		}
		func_20();
		if (Global_68325 != iVar8)
		{
			func_19();
			func_31();
			iVar2 = -1;
			iVar8 = Global_68325;
			while (unk_0xB4B5BF5882A555F9())
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
		}
		if (Global_35737)
		{
			if (Global_35739 > -1)
			{
				if (!Global_35615[Global_35739 /*19*/].f_6)
				{
					if (!func_17(Global_35739, 1))
					{
						Global_35739 = -1;
					}
				}
			}
		}
		if (func_13())
		{
			iVar2 = -1;
			func_19();
		}
		if (iVar2 > -1)
		{
			if (!Global_35737)
			{
				if (Global_35739 != iVar2)
				{
					if (func_12(Global_35739))
					{
						func_19();
						if (!Global_35615[iVar2 /*19*/].f_5 && Global_35615[iVar2 /*19*/])
						{
							if (!func_13())
							{
								if (!Global_35615[iVar2 /*19*/].f_7)
								{
									if (!Global_35615[iVar2 /*19*/].f_6)
									{
										if (!Global_35615[iVar2 /*19*/].f_12)
										{
											func_11(Global_35615[iVar2 /*19*/].f_8, Global_35615[iVar2 /*19*/].f_3);
										}
										else
										{
											func_10(Global_35615[iVar2 /*19*/].f_8, Global_35615[iVar2 /*19*/].f_13, Global_35615[iVar2 /*19*/].f_3);
										}
										Global_35739 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_19();
			}
		}
		else
		{
			func_19();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_9();
				if (unk_0x734D3E67C9F7FE4A(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_13())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0x1453F50088A91E4E(2, 51))
						{
							Global_35615[iVar2 /*19*/].f_4 = 1;
							Global_35615[iVar2 /*19*/].f_17 = 0;
							iVar7 = Global_35615[iVar2 /*19*/].f_1;
							iVar0 = 1;
							Global_35730 = 0;
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
						if (!unk_0x3EC29154A6AFBA2A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 1))
						{
							if (unk_0x202EF5D8203705EF(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0))
							{
								if (unk_0xF32EA93CF8B5EBCE(0, 101))
								{
									bVar5 = true;
									unk_0x4B404C739A9AFC7A(0, 101, 1);
								}
								if (unk_0xF32EA93CF8B5EBCE(0, 74))
								{
									bVar4 = true;
									unk_0x4B404C739A9AFC7A(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x7D98754083C1D605(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x7D98754083C1D605(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_8() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (unk_0x83666F9FB8FEBD4B() > 5000)
					{
						Global_35615[iVar2 /*19*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_7(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_35615[iVar2 /*19*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_35615[iVar2 /*19*/].f_7 || Global_35615[iVar2 /*19*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_35730)
				{
					func_19();
				}
				if (unk_0x1453F50088A91E4E(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_35615[iVar2 /*19*/].f_17 = 0;
					}
				}
				if (Global_35731)
				{
					Global_35731 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_35615[iVar2 /*19*/].f_4 || Global_35615[iVar2 /*19*/].f_7))
					{
						Global_35731 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_35615[iVar2 /*19*/].f_7 || Global_35615[iVar2 /*19*/] == 0)
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
			unk_0x4B404C739A9AFC7A(0, 46, 1);
			unk_0x4B404C739A9AFC7A(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			unk_0xC1B1E9A034A63A62(0);
			iVar6 = 0;
		}
		func_6();
		func_4(&iVar2);
		Global_35736 = 0;
		Global_35737 = 0;
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (!bLocal_85)
	{
		return;
	}
	iVar0 = 1;
	if (iLocal_95 == 1)
	{
		iVar0 = 0;
	}
	if (bLocal_86)
	{
		unk_0x5B4A49EA799C667F(&Local_87);
		unk_0x4498E0CBD76B2D72(&Global_35732);
		unk_0x4498E0CBD76B2D72(&Local_91);
		unk_0x644558F3AB755120(0, 0, iVar0, 50);
	}
	else
	{
		unk_0x5B4A49EA799C667F(&Local_87);
		unk_0x4498E0CBD76B2D72(&Global_35732);
		unk_0x644558F3AB755120(0, 0, iVar0, 50);
	}
	switch (iLocal_95)
	{
		case 0:
			break;
		
		case 1:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0xC2E1777941B4536E(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_3()
{
	return Global_2422491.f_2136[0 /*70*/].f_1 != 0;
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/] && Global_35615[iVar0 /*19*/].f_4)
		{
			if (Global_35615[iVar0 /*19*/].f_18 != 0)
			{
				if (!unk_0xDECCEB462707CB3E(Global_35615[iVar0 /*19*/].f_18))
				{
					if (*iParam0 > -1)
					{
						func_5();
					}
					Global_35615[iVar0 /*19*/] = 0;
					Global_35615[iVar0 /*19*/].f_18 = 0;
					Global_35615[iVar0 /*19*/] = 0;
					Global_35615[iVar0 /*19*/].f_4 = 0;
					Global_35615[iVar0 /*19*/].f_5 = 0;
					Global_35615[iVar0 /*19*/].f_2 = 0;
					Global_35615[iVar0 /*19*/].f_7 = 0;
					Global_35615[iVar0 /*19*/].f_6 = 0;
					Global_35615[iVar0 /*19*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (Global_35739 != -1 || bLocal_85)
	{
		bLocal_85 = false;
		Global_35739 = -1;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/].f_7)
		{
			if (iVar0 == Global_35739)
			{
				func_19();
			}
			Global_35615[iVar0 /*19*/].f_18 = 0;
			Global_35615[iVar0 /*19*/] = 0;
			Global_35615[iVar0 /*19*/].f_4 = 0;
			Global_35615[iVar0 /*19*/].f_5 = 0;
			Global_35615[iVar0 /*19*/].f_2 = 0;
			Global_35615[iVar0 /*19*/].f_7 = 0;
			Global_35615[iVar0 /*19*/].f_6 = 0;
			Global_35615[iVar0 /*19*/].f_1 = -1;
			Global_35615[iVar0 /*19*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_7(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_35615[iParam0 /*19*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/] == 1)
		{
			if (Global_35615[iVar0 /*19*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_19();
	}
	return iVar1;
}

int func_9()
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
		if (Global_35615[iVar0 /*19*/])
		{
			if (Global_35615[iVar0 /*19*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_35615[iVar0 /*19*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_10(struct<4> Param0, struct<4> Param4, var uParam8)
{
	Local_87 = { Param0 };
	Local_91 = { Param4 };
	bLocal_85 = true;
	bLocal_86 = true;
	iLocal_95 = uParam8;
}

void func_11(struct<4> Param0, var uParam4)
{
	Local_87 = { Param0 };
	bLocal_85 = true;
	bLocal_86 = false;
	iLocal_95 = uParam4;
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (Global_87376 && Global_87375)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_17(iParam0, 1) || bLocal_85)
		{
			return 1;
		}
	}
	if (unk_0x11A809BBE3889742() && !unk_0x4FD7FBDDE9643EAE())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_17(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_13()
{
	if (Global_67066)
	{
		return 1;
	}
	if (!unk_0x2AF80829930084FD(unk_0xA495B6AB6F2BF8C7()))
	{
		return 1;
	}
	if (func_16(0))
	{
		return 1;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return 1;
	}
	if (Global_35736)
	{
		return 1;
	}
	if (unk_0x2E2A9B1A994AB25D(19))
	{
		return 1;
	}
	if (func_15(1))
	{
		return 1;
	}
	if (unk_0xB4B5BF5882A555F9())
	{
		return 1;
	}
	if (func_14(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

bool func_15(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

int func_16(int iParam0)
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

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18(iParam0);
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
	if (Global_35615[iVar0 /*19*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_35615[iVar0 /*19*/].f_12)
	{
		unk_0x38DB30583B2DE025(&(Global_35615[iVar0 /*19*/].f_8));
		unk_0x4498E0CBD76B2D72(&Global_35732);
		iVar1 = unk_0x2DB019D515966DF9(0);
	}
	else
	{
		unk_0x38DB30583B2DE025(&(Global_35615[iVar0 /*19*/].f_8));
		unk_0x4498E0CBD76B2D72(&Global_35732);
		unk_0x4498E0CBD76B2D72(&(Global_35615[iVar0 /*19*/].f_13));
		iVar1 = unk_0x2DB019D515966DF9(0);
	}
	return iVar1;
}

int func_18(int iParam0)
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
		if (Global_35615[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19()
{
	func_5();
	Global_35739 = -1;
}

void func_20()
{
	if (!unk_0xB4B5BF5882A555F9() && !Global_67066)
	{
		if (func_25(0))
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_2428577.f_656.f_12)))
			{
				func_24();
				func_21(6);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_67075 = iParam0;
	switch (Global_67075)
	{
		case 3:
			Global_67073 = 0;
			break;
		
		case 4:
			Global_67073 = 3;
			break;
	}
	if (unk_0x16CDA1894CFE0781(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_68325 && func_23())
	{
		return;
	}
	if (!Global_68325 && func_22())
	{
		return;
	}
	if (!unk_0x3EBB3CB89FC2CE55("appInternet"))
	{
		unk_0x19DD85EFF70867D4("appInternet");
	}
	while (!unk_0x3EBB3CB89FC2CE55("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0xF8FDF7446A3DA9B4("appInternet");
}

var func_22()
{
	return Global_67067;
}

var func_23()
{
	return Global_1690475;
}

void func_24()
{
	Global_2428577.f_656.f_28 = 0;
}

bool func_25(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2428577.f_656.f_28 && unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == Global_2428577.f_656.f_31);
	}
	return Global_2428577.f_656.f_28;
}

void func_26()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_51933[iVar1] < 0)
		{
			Global_51933[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_27(0);
		func_27(1);
		func_27(2);
	}
}

void func_27(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_28()
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
		if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
		{
			if (!iLocal_96)
			{
				if (unk_0xDF10D2071ACFA5F3(&Var0))
				{
					iLocal_96 = 1;
				}
			}
			if (iLocal_96)
			{
				if (unk_0x027792382089E3E1())
				{
				}
				else
				{
					if (unk_0x937B23E37EEDEC1F())
					{
						StringCopy(&(Global_2097152[func_30() /*8064*/].f_7887.f_18[Global_1572889 /*6*/]), unk_0x7EF01466002192D7(&Var0), 24);
					}
					Global_1572889 = -1;
					iLocal_96 = 0;
				}
			}
		}
		else if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
		{
			if (func_29(Var0))
			{
				StringCopy(&(Global_2097152[func_30() /*8064*/].f_7887.f_18[Global_1572889 /*6*/]), unk_0x7EF01466002192D7(&Var0), 24);
			}
			Global_1572889 = -1;
			iLocal_96 = 0;
		}
		else
		{
			if (func_29(Var0))
			{
				StringCopy(&(Global_2097152[func_30() /*8064*/].f_7887.f_18[Global_1572889 /*6*/]), unk_0x7FDAD55ADCAB7349(&Var0), 24);
			}
			Global_1572889 = -1;
			iLocal_96 = 0;
		}
	}
}

bool func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6812E31A0CF4755C(&uParam0, 13);
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_31()
{
	int iVar0;
	
	Global_35730 = 0;
	Global_35736 = 0;
	Global_35737 = 0;
	Global_35738 = 1;
	Global_35739 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_35615[iVar0 /*19*/] = 0;
		iVar0++;
	}
}

