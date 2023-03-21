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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	struct<4> Local_101 = { 0, 0, 0, 0 } ;
	struct<16> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0xE7FAF8E78F7D3A73(joaat("context_controller")) > 1)
	{
		unk_0x810C5D6462DD69E6();
	}
	unk_0xEE998050210A7287();
	iVar0 = 0;
	iVar1 = iVar0;
	unk_0xC1B1E9A034A63A62(0);
	Global_36757 = 0;
	func_37();
	StringCopy(&Global_36758, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_70852;
	while (true)
	{
		if (Global_70852)
		{
			func_34();
		}
		else
		{
			func_32();
		}
		func_26();
		if (Global_70852 != iVar8)
		{
			func_25();
			func_37();
			iVar2 = -1;
			iVar8 = Global_70852;
			while (unk_0x51CFE20A158947F4())
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
		}
		if (Global_36763)
		{
			if (Global_36765 > -1)
			{
				if (!Global_36563[Global_36765 /*32*/].f_6)
				{
					if (!func_23(Global_36765, 1))
					{
						Global_36765 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_36763)
			{
				if (Global_36765 != iVar2)
				{
					if (func_18(Global_36765))
					{
						func_25();
						if (!Global_36563[iVar2 /*32*/].f_5 && Global_36563[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_36563[iVar2 /*32*/].f_7)
								{
									if (!Global_36563[iVar2 /*32*/].f_6)
									{
										if (!Global_36563[iVar2 /*32*/].f_12)
										{
											func_17(Global_36563[iVar2 /*32*/].f_8, Global_36563[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_36563[iVar2 /*32*/].f_8, Global_36563[iVar2 /*32*/].f_13, Global_36563[iVar2 /*32*/].f_3, Global_36563[iVar2 /*32*/].f_30);
										}
										Global_36765 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0x15176C3A1CD588B7(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 51))
						{
							Global_36563[iVar2 /*32*/].f_4 = 1;
							Global_36563[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_36563[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_36756 = 0;
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
						if (!unk_0x67E601AC02CEEAD9(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), 1))
						{
							if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(unk_0x0A91D180DDC7A1B8()), 0))
							{
								if (unk_0x96D32548EEC3FFE6(0, 101))
								{
									bVar5 = true;
									unk_0x9C7EE7DE7041A3F4(0, 101, 1);
								}
								if (unk_0x96D32548EEC3FFE6(0, 74))
								{
									bVar4 = true;
									unk_0x9C7EE7DE7041A3F4(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0xB156023E2D4E4859(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0xB156023E2D4E4859(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (unk_0x83666F9FB8FEBD4B() > 5000)
					{
						Global_36563[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_36563[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_36563[iVar2 /*32*/].f_7 || Global_36563[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_36756)
				{
					func_25();
				}
				if (unk_0xFC0C00F9DE2AEC93(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_36563[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_36757)
				{
					Global_36757 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_36563[iVar2 /*32*/].f_4 || Global_36563[iVar2 /*32*/].f_7))
					{
						Global_36757 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_36563[iVar2 /*32*/].f_7 || Global_36563[iVar2 /*32*/] == 0)
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
			unk_0x9C7EE7DE7041A3F4(0, 46, 1);
			unk_0x9C7EE7DE7041A3F4(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			unk_0xC1B1E9A034A63A62(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_36762 = 0;
		Global_36763 = 0;
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (!bLocal_98)
	{
		return;
	}
	iVar0 = 1;
	if (iLocal_121 == 1)
	{
		iVar0 = 0;
	}
	if (bLocal_99)
	{
		if (bLocal_100)
		{
			unk_0x20FCC5A532CA7670(0);
		}
		unk_0x2202872EA73499C3(&Local_101);
		if (bLocal_100)
		{
			unk_0xB4179F7E88F4C4BF(&Local_105);
		}
		else
		{
			unk_0xBEFD1ED9B6BE5127(&Global_36758);
			unk_0xBEFD1ED9B6BE5127(&Local_105);
		}
		unk_0xF764171B43EBA5E4(0, 0, iVar0, 50);
	}
	else
	{
		unk_0x2202872EA73499C3(&Local_101);
		unk_0xBEFD1ED9B6BE5127(&Global_36758);
		unk_0xF764171B43EBA5E4(0, 0, iVar0, 50);
	}
	switch (iLocal_121)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0x929C3CBA660376D5(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2436169.f_2591[0 /*79*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627460[iParam0 /*530*/].f_11;
	if (iVar0 != func_8() && Global_1627460[iVar0 /*530*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_8())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 == iParam0 && Global_1627460[iParam0 /*530*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	unk_0x06538B382CF18ABB(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0x929C3CBA660376D5(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36563[iVar0 /*32*/] && Global_36563[iVar0 /*32*/].f_4)
		{
			if (Global_36563[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0x19B3A29FD53C54A6(Global_36563[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_36563[iVar0 /*32*/] = 0;
					Global_36563[iVar0 /*32*/].f_31 = 0;
					Global_36563[iVar0 /*32*/] = 0;
					Global_36563[iVar0 /*32*/].f_4 = 0;
					Global_36563[iVar0 /*32*/].f_5 = 0;
					Global_36563[iVar0 /*32*/].f_2 = 0;
					Global_36563[iVar0 /*32*/].f_7 = 0;
					Global_36563[iVar0 /*32*/].f_6 = 0;
					Global_36563[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_36765 != -1 || bLocal_98)
	{
		bLocal_98 = false;
		Global_36765 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36563[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_36765)
			{
				func_25();
			}
			Global_36563[iVar0 /*32*/].f_31 = 0;
			Global_36563[iVar0 /*32*/] = 0;
			Global_36563[iVar0 /*32*/].f_4 = 0;
			Global_36563[iVar0 /*32*/].f_5 = 0;
			Global_36563[iVar0 /*32*/].f_2 = 0;
			Global_36563[iVar0 /*32*/].f_7 = 0;
			Global_36563[iVar0 /*32*/].f_6 = 0;
			Global_36563[iVar0 /*32*/].f_1 = -1;
			Global_36563[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_36563[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36563[iVar0 /*32*/] == 1)
		{
			if (Global_36563[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
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
		if (Global_36563[iVar0 /*32*/])
		{
			if (Global_36563[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_36563[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param4, var uParam20, var uParam21)
{
	Local_101 = { Param0 };
	Local_105 = { Param4 };
	bLocal_98 = true;
	bLocal_99 = true;
	iLocal_121 = uParam20;
	bLocal_100 = uParam21;
}

void func_17(struct<4> Param0, var uParam4)
{
	Local_101 = { Param0 };
	bLocal_98 = true;
	bLocal_99 = false;
	iLocal_121 = uParam4;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_89903 && Global_89902)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_98)
		{
			return 1;
		}
	}
	if (unk_0x622E10ED992CEB95() && !unk_0xF2872BB191EB0B42())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_68213)
	{
		return 1;
	}
	if (!unk_0x557001354138B7FB(unk_0x0A91D180DDC7A1B8()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0xEAE1A41FBC3984B1())
	{
		return 1;
	}
	if (Global_36762)
	{
		return 1;
	}
	if (unk_0xA9CC0DE677D82334(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0x51CFE20A158947F4())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
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
	if (Global_36563[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36563[iVar0 /*32*/].f_12)
	{
		unk_0x24BB6189982CE7D6(&(Global_36563[iVar0 /*32*/].f_8));
		unk_0xBEFD1ED9B6BE5127(&Global_36758);
		iVar1 = unk_0xF2850FB50EE28440(0);
	}
	else
	{
		unk_0x24BB6189982CE7D6(&(Global_36563[iVar0 /*32*/].f_8));
		unk_0xBEFD1ED9B6BE5127(&Global_36758);
		if (Global_36563[iVar0 /*32*/].f_30)
		{
			unk_0xB4179F7E88F4C4BF(&(Global_36563[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xBEFD1ED9B6BE5127(&(Global_36563[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0xF2850FB50EE28440(0);
	}
	return iVar1;
}

int func_24(int iParam0)
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
		if (Global_36563[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_36765 = -1;
}

void func_26()
{
	if (!unk_0x51CFE20A158947F4() && !Global_68213)
	{
		if (func_31(0))
		{
			if (!unk_0xFAFFA408239A026B(&(Global_2447128.f_671.f_12)))
			{
				func_30();
				func_27(6, 0, 0, 0);
			}
		}
	}
}

void func_27(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Global_68326 = iParam0;
	switch (Global_68326)
	{
		case 3:
			Global_68324 = 0;
			break;
		
		case 4:
			Global_68324 = 3;
			break;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appsecuroserv")) > 0)
	{
		if (bParam1)
		{
		}
		return;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appbikerbusiness")) > 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appimportexport")) > 0)
	{
		if (bParam3)
		{
		}
		return;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
	{
		if ((bParam1 || bParam2) || bParam3)
		{
		}
		return;
	}
	if (Global_70852 && func_29())
	{
		return;
	}
	if (!Global_70852 && func_28())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xC040FCA5F6E73B3E("appSecuroServ"))
		{
			unk_0xC8A5933869E73673("appSecuroServ");
		}
		while (!unk_0xC040FCA5F6E73B3E("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4592);
		unk_0x2130D1396EE39C8E("appSecuroServ");
	}
	else if (bParam2)
	{
		if (!unk_0xC040FCA5F6E73B3E("appBikerBusiness"))
		{
			unk_0xC8A5933869E73673("appBikerBusiness");
		}
		while (!unk_0xC040FCA5F6E73B3E("appBikerBusiness"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appBikerBusiness", 4592);
		unk_0x2130D1396EE39C8E("appBikerBusiness");
	}
	else if (bParam3)
	{
		if (!unk_0xC040FCA5F6E73B3E("appImportExport"))
		{
			unk_0xC8A5933869E73673("appImportExport");
		}
		while (!unk_0xC040FCA5F6E73B3E("appImportExport"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appImportExport", 4592);
		unk_0x2130D1396EE39C8E("appImportExport");
	}
	else
	{
		if (!unk_0xC040FCA5F6E73B3E("appInternet"))
		{
			unk_0xC8A5933869E73673("appInternet");
		}
		while (!unk_0xC040FCA5F6E73B3E("appInternet"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appInternet", 4592);
		unk_0x2130D1396EE39C8E("appInternet");
	}
}

var func_28()
{
	return Global_68214;
}

var func_29()
{
	return Global_1795280;
}

void func_30()
{
	Global_2447128.f_671.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2447128.f_671.f_28 && unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == Global_2447128.f_671.f_31);
	}
	return Global_2447128.f_671.f_28;
}

void func_32()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_53075[iVar1] < 0)
		{
			Global_53075[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_33(0);
		func_33(1);
		func_33(2);
	}
}

void func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_34()
{
	struct<13> Var0;
	
	if (Global_1573300 != -1)
	{
		Var0.f_0 = Global_1573301[0];
		Var0.f_1 = Global_1573301[1];
		Var0.f_2 = Global_1573301[2];
		Var0.f_3 = Global_1573301[3];
		Var0.f_4 = Global_1573301[4];
		Var0.f_5 = Global_1573301[5];
		Var0.f_6 = Global_1573301[6];
		Var0.f_7 = Global_1573301[7];
		Var0.f_8 = Global_1573301[8];
		Var0.f_9 = Global_1573301[9];
		Var0.f_10 = Global_1573301[10];
		Var0.f_11 = Global_1573301[11];
		Var0.f_12 = Global_1573301[12];
		if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
		{
			if (!iLocal_122)
			{
				if (unk_0x3958E8BDD430EA82(&Var0))
				{
					iLocal_122 = 1;
				}
			}
			if (iLocal_122)
			{
				if (unk_0x18BFCE3B69004616())
				{
				}
				else
				{
					if (unk_0x948C0172AFA8332E())
					{
						StringCopy(&(Global_2097152[func_36() /*12062*/].f_11885.f_18[Global_1573300 /*6*/]), unk_0xBC706206837F4A11(&Var0), 24);
					}
					Global_1573300 = -1;
					iLocal_122 = 0;
				}
			}
		}
		else if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
		{
			if (func_35(Var0))
			{
				StringCopy(&(Global_2097152[func_36() /*12062*/].f_11885.f_18[Global_1573300 /*6*/]), unk_0xBC706206837F4A11(&Var0), 24);
			}
			Global_1573300 = -1;
			iLocal_122 = 0;
		}
		else
		{
			if (func_35(Var0))
			{
				StringCopy(&(Global_2097152[func_36() /*12062*/].f_11885.f_18[Global_1573300 /*6*/]), unk_0x5F8C3621C8915421(&Var0), 24);
			}
			Global_1573300 = -1;
			iLocal_122 = 0;
		}
	}
}

bool func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_37()
{
	int iVar0;
	
	Global_36756 = 0;
	Global_36762 = 0;
	Global_36763 = 0;
	Global_36764 = 1;
	Global_36765 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_36563[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

