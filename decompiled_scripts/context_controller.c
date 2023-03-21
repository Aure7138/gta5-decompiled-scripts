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
	var uLocal_56 = 10;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	struct<4> Local_102 = { 0, 0, 0, 0 } ;
	struct<16> Local_106 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	if (unk_0x82F1A060D8F4583B(joaat("context_controller")) > 1)
	{
		unk_0x921053BAF754303D();
	}
	unk_0x330AFE43E1483B3F();
	iVar0 = 0;
	iVar1 = iVar0;
	unk_0xC1B1E9A034A63A62(0);
	Global_36678 = 0;
	func_37();
	StringCopy(&Global_36679, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_69702;
	while (true)
	{
		if (Global_69702)
		{
			func_34();
		}
		else
		{
			func_32();
		}
		func_26();
		if (Global_69702 != iVar8)
		{
			func_25();
			func_37();
			iVar2 = -1;
			iVar8 = Global_69702;
			while (unk_0xE9E6B5364105A000())
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
		}
		if (Global_36684)
		{
			if (Global_36686 > -1)
			{
				if (!Global_36484[Global_36686 /*32*/].f_6)
				{
					if (!func_23(Global_36686, 1))
					{
						Global_36686 = -1;
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
			if (!Global_36684)
			{
				if (Global_36686 != iVar2)
				{
					if (func_18(Global_36686))
					{
						func_25();
						if (!Global_36484[iVar2 /*32*/].f_5 && Global_36484[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_36484[iVar2 /*32*/].f_7)
								{
									if (!Global_36484[iVar2 /*32*/].f_6)
									{
										if (!Global_36484[iVar2 /*32*/].f_12)
										{
											func_17(Global_36484[iVar2 /*32*/].f_8, Global_36484[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_36484[iVar2 /*32*/].f_8, Global_36484[iVar2 /*32*/].f_13, Global_36484[iVar2 /*32*/].f_3, Global_36484[iVar2 /*32*/].f_30);
										}
										Global_36686 = iVar2;
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
				if (unk_0x2BB31504507E9506(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0x4B972043966C2EB8(2, 51))
						{
							Global_36484[iVar2 /*32*/].f_4 = 1;
							Global_36484[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_36484[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_36677 = 0;
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
						if (!unk_0xE34CF180A5429DEA(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), 1))
						{
							if (unk_0xFD0FE723227D5AB6(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), 0))
							{
								if (unk_0xC36DBFD18BF1A53B(0, 101))
								{
									bVar5 = true;
									unk_0xD1BB2AD73E7FC3A7(0, 101, 1);
								}
								if (unk_0xC36DBFD18BF1A53B(0, 74))
								{
									bVar4 = true;
									unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0xCA3F0B618E8962EA(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0xCA3F0B618E8962EA(0, 74, 1);
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
						Global_36484[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_36484[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_36484[iVar2 /*32*/].f_7 || Global_36484[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_36677)
				{
					func_25();
				}
				if (unk_0x4B972043966C2EB8(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_36484[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_36678)
				{
					Global_36678 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_36484[iVar2 /*32*/].f_4 || Global_36484[iVar2 /*32*/].f_7))
					{
						Global_36678 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_36484[iVar2 /*32*/].f_7 || Global_36484[iVar2 /*32*/] == 0)
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
			unk_0xD1BB2AD73E7FC3A7(0, 46, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			unk_0xC1B1E9A034A63A62(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_36683 = 0;
		Global_36684 = 0;
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (!bLocal_99)
	{
		return;
	}
	iVar0 = 1;
	if (iLocal_122 == 1)
	{
		iVar0 = 0;
	}
	if (bLocal_100)
	{
		if (bLocal_101)
		{
			unk_0x99DE51C8DB919DA7(0);
		}
		unk_0x252D021C9D92DBA9(&Local_102);
		if (bLocal_101)
		{
			unk_0xBAB00B98D1E61BEE(&Local_106);
		}
		else
		{
			unk_0x34D84D73B5DF8E80(&Global_36679);
			unk_0x34D84D73B5DF8E80(&Local_106);
		}
		unk_0x8B1500AADBA665BD(0, 0, iVar0, 50);
	}
	else
	{
		unk_0x252D021C9D92DBA9(&Local_102);
		unk_0x34D84D73B5DF8E80(&Global_36679);
		unk_0x8B1500AADBA665BD(0, 0, iVar0, 50);
	}
	switch (iLocal_122)
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
		unk_0x4988C48537D1AE4F(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2433125.f_2199[0 /*76*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0xBE369BE1BC57A796(), bParam0);
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
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_8() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_8())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
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
	unk_0x5C6A42FFCC24611F(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0x4988C48537D1AE4F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/] && Global_36484[iVar0 /*32*/].f_4)
		{
			if (Global_36484[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0x1EFA84312BB8AA22(Global_36484[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_36484[iVar0 /*32*/] = 0;
					Global_36484[iVar0 /*32*/].f_31 = 0;
					Global_36484[iVar0 /*32*/] = 0;
					Global_36484[iVar0 /*32*/].f_4 = 0;
					Global_36484[iVar0 /*32*/].f_5 = 0;
					Global_36484[iVar0 /*32*/].f_2 = 0;
					Global_36484[iVar0 /*32*/].f_7 = 0;
					Global_36484[iVar0 /*32*/].f_6 = 0;
					Global_36484[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_36686 != -1 || bLocal_99)
	{
		bLocal_99 = false;
		Global_36686 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_36686)
			{
				func_25();
			}
			Global_36484[iVar0 /*32*/].f_31 = 0;
			Global_36484[iVar0 /*32*/] = 0;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = 0;
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_6 = 0;
			Global_36484[iVar0 /*32*/].f_1 = -1;
			Global_36484[iVar0 /*32*/].f_3 = 0;
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
	if (Global_36484[iParam0 /*32*/].f_5)
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
		if (Global_36484[iVar0 /*32*/] == 1)
		{
			if (Global_36484[iVar0 /*32*/].f_4 == 0)
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
		if (Global_36484[iVar0 /*32*/])
		{
			if (Global_36484[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_36484[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param4, var uParam20, var uParam21)
{
	Local_102 = { Param0 };
	Local_106 = { Param4 };
	bLocal_99 = true;
	bLocal_100 = true;
	iLocal_122 = uParam20;
	bLocal_101 = uParam21;
}

void func_17(struct<4> Param0, var uParam4)
{
	Local_102 = { Param0 };
	bLocal_99 = true;
	bLocal_100 = false;
	iLocal_122 = uParam4;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_88753 && Global_88752)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_99)
		{
			return 1;
		}
	}
	if (unk_0x9E123D5FF2973C60() && !unk_0x01FDA8DB4057E13F())
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
	if (Global_68131)
	{
		return 1;
	}
	if (!unk_0xCF7855B965948E97(unk_0x592069F95C314814()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0x1B76B77EDF24A933())
	{
		return 1;
	}
	if (Global_36683)
	{
		return 1;
	}
	if (unk_0x33243A46E91831D5(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0xE9E6B5364105A000())
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
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_22(int iParam0)
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
	if (Global_36484[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36484[iVar0 /*32*/].f_12)
	{
		unk_0x1B345BEADF0C82A0(&(Global_36484[iVar0 /*32*/].f_8));
		unk_0x34D84D73B5DF8E80(&Global_36679);
		iVar1 = unk_0xCF2B4FB18449D099(0);
	}
	else
	{
		unk_0x1B345BEADF0C82A0(&(Global_36484[iVar0 /*32*/].f_8));
		unk_0x34D84D73B5DF8E80(&Global_36679);
		if (Global_36484[iVar0 /*32*/].f_30)
		{
			unk_0xBAB00B98D1E61BEE(&(Global_36484[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x34D84D73B5DF8E80(&(Global_36484[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0xCF2B4FB18449D099(0);
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
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0)
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
	Global_36686 = -1;
}

void func_26()
{
	if (!unk_0xE9E6B5364105A000() && !Global_68131)
	{
		if (func_31(0))
		{
			if (!unk_0x9C88EB7B70229335(&(Global_2443134.f_662.f_12)))
			{
				func_30();
				func_27(6, 0, 0, 0);
			}
		}
	}
}

void func_27(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Global_68192 = iParam0;
	switch (Global_68192)
	{
		case 3:
			Global_68190 = 0;
			break;
		
		case 4:
			Global_68190 = 3;
			break;
	}
	if (bParam1)
	{
		if (unk_0x82F1A060D8F4583B(joaat("appsecuroserv")) > 0)
		{
			return;
		}
	}
	else if (bParam2)
	{
		if (unk_0x82F1A060D8F4583B(joaat("appbikerbusiness")) > 0)
		{
			return;
		}
	}
	else if (bParam3)
	{
		if (unk_0x82F1A060D8F4583B(joaat("appimportexport")) > 0)
		{
			return;
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_69702 && func_29())
	{
		return;
	}
	if (!Global_69702 && func_28())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x32B1F051FF487881("appSecuroServ"))
		{
			unk_0xFCDDC89C28E82BB4("appSecuroServ");
		}
		while (!unk_0x32B1F051FF487881("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4592);
		unk_0x07481837BFD9C1CD("appSecuroServ");
	}
	else if (bParam2)
	{
		if (!unk_0x32B1F051FF487881("appBikerBusiness"))
		{
			unk_0xFCDDC89C28E82BB4("appBikerBusiness");
		}
		while (!unk_0x32B1F051FF487881("appBikerBusiness"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appBikerBusiness", 4592);
		unk_0x07481837BFD9C1CD("appBikerBusiness");
	}
	else if (bParam3)
	{
		if (!unk_0x32B1F051FF487881("appImportExport"))
		{
			unk_0xFCDDC89C28E82BB4("appImportExport");
		}
		while (!unk_0x32B1F051FF487881("appImportExport"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appImportExport", 4592);
		unk_0x07481837BFD9C1CD("appImportExport");
	}
	else
	{
		if (!unk_0x32B1F051FF487881("appInternet"))
		{
			unk_0xFCDDC89C28E82BB4("appInternet");
		}
		while (!unk_0x32B1F051FF487881("appInternet"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appInternet", 4592);
		unk_0x07481837BFD9C1CD("appInternet");
	}
}

var func_28()
{
	return Global_68132;
}

var func_29()
{
	return Global_1751495;
}

void func_30()
{
	Global_2443134.f_662.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2443134.f_662.f_28 && unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == Global_2443134.f_662.f_31);
	}
	return Global_2443134.f_662.f_28;
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
		if (Global_52996[iVar1] < 0)
		{
			Global_52996[iVar1] = 0;
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
	
	uVar0 = Global_52996[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x731753D8494ABECD(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			unk_0x731753D8494ABECD(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			unk_0x731753D8494ABECD(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_34()
{
	struct<13> Var0;
	
	if (Global_1573296 != -1)
	{
		Var0.f_0 = Global_1573297[0];
		Var0.f_1 = Global_1573297[1];
		Var0.f_2 = Global_1573297[2];
		Var0.f_3 = Global_1573297[3];
		Var0.f_4 = Global_1573297[4];
		Var0.f_5 = Global_1573297[5];
		Var0.f_6 = Global_1573297[6];
		Var0.f_7 = Global_1573297[7];
		Var0.f_8 = Global_1573297[8];
		Var0.f_9 = Global_1573297[9];
		Var0.f_10 = Global_1573297[10];
		Var0.f_11 = Global_1573297[11];
		Var0.f_12 = Global_1573297[12];
		if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
		{
			if (!iLocal_123)
			{
				if (unk_0x6A382AED99EAEF86(&Var0))
				{
					iLocal_123 = 1;
				}
			}
			if (iLocal_123)
			{
				if (unk_0x7ACAC31C555C4D84())
				{
				}
				else
				{
					if (unk_0x4C070B019307642E())
					{
						StringCopy(&(Global_2097152[func_36() /*10758*/].f_10581.f_18[Global_1573296 /*6*/]), unk_0x1CBFF145EA3C6BCD(&Var0), 24);
					}
					Global_1573296 = -1;
					iLocal_123 = 0;
				}
			}
		}
		else if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
		{
			if (func_35(Var0))
			{
				StringCopy(&(Global_2097152[func_36() /*10758*/].f_10581.f_18[Global_1573296 /*6*/]), unk_0x1CBFF145EA3C6BCD(&Var0), 24);
			}
			Global_1573296 = -1;
			iLocal_123 = 0;
		}
		else
		{
			if (func_35(Var0))
			{
				StringCopy(&(Global_2097152[func_36() /*10758*/].f_10581.f_18[Global_1573296 /*6*/]), unk_0x93484F815C6EEAB0(&Var0), 24);
			}
			Global_1573296 = -1;
			iLocal_123 = 0;
		}
	}
}

bool func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BC6F3BBFEAB9958(&uParam0, 13);
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
	
	Global_36677 = 0;
	Global_36683 = 0;
	Global_36684 = 0;
	Global_36685 = 1;
	Global_36686 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_36484[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

