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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	unk_0x4EDE34FBADD967A6(0);
	Local_44 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xD63E63DFACCEB80E(11))
	{
		func_22();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB819D1DD7DA58F08())
		{
			if (func_3(3))
			{
				switch (iLocal_42)
				{
					case 0:
						if (iLocal_43 == 1)
						{
							iLocal_42 = 1;
						}
						else
						{
							func_2();
						}
						break;
					
					case 1:
						if (iLocal_50 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_22();
			}
		}
		else
		{
			func_22();
		}
	}
}

void func_1()
{
	if (unk_0xC9D9444186B5A374() > 7000)
	{
		if (!unk_0x0BA451447C3B1A8D(uLocal_51))
		{
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), uLocal_51, 10f, 10f, 10f, 0, 1, 0) && iLocal_53 == 0)
			{
				unk_0x5AE11BC36633DE4E(0);
				Local_47 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
				unk_0xF87DA7F5BA8C7D0F(&uLocal_54);
				unk_0xE06445687CB36C85(0, Local_47, 0);
				unk_0x7CF15DD8B3815A0D(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_54);
				if (!unk_0x0BA451447C3B1A8D(uLocal_51))
				{
					unk_0xC7EBE3C9AC83FAAA(uLocal_51, uLocal_54);
				}
				unk_0xCD02E3C29B8253A6(&uLocal_54);
				iLocal_53 = 1;
			}
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), uLocal_51, 3f, 3f, 3f, 0, 1, 0) && iLocal_52 == 0)
			{
				Local_47 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
				unk_0x5AE11BC36633DE4E(0);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_54);
				unk_0xE06445687CB36C85(0, Local_47, 0);
				unk_0x7CF15DD8B3815A0D(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_54);
				unk_0xC7EBE3C9AC83FAAA(uLocal_51, uLocal_54);
			}
			unk_0xCD02E3C29B8253A6(&uLocal_54);
			iLocal_52 = 1;
		}
	}
}

void func_2()
{
	unk_0x3BC6D217451D6BB7(joaat("s_m_m_strpreach_01"));
	unk_0xDA293E5084610B09("amb@PREACHER");
	while (!unk_0x149162179DBAEDB0(joaat("s_m_m_strpreach_01")) || !unk_0x3DA2EED4204CE591("amb@PREACHER"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Local_47.f_2 = (Local_44.f_2 - 1f);
	uLocal_51 = unk_0xA00B5D954AD320BF(19, joaat("s_m_m_strpreach_01"), Local_44.f_0, Local_44.f_1, Local_47.f_2, 0f, 1, 1);
	if (!unk_0x0BA451447C3B1A8D(uLocal_51))
	{
		unk_0xF87DA7F5BA8C7D0F(&uLocal_54);
		unk_0xE06445687CB36C85(0, Local_47, 0);
		unk_0x7CF15DD8B3815A0D(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
		unk_0x3179CCC77CBAB31F(uLocal_54);
		unk_0xC7EBE3C9AC83FAAA(uLocal_51, uLocal_54);
		unk_0xCD02E3C29B8253A6(&uLocal_54);
	}
	iLocal_43 = 1;
}

int func_3(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_21(6) || func_21(7))
			{
				return 1;
			}
			else
			{
				return func_3(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_19(5))
			{
				if (func_4(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar0 = func_15();
				if (!func_14(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_13()) || Global_96405) || Global_24446) || func_12()) || func_11(8, -1)) || func_10()) || func_9()) || func_8()) || func_7()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_13()) || Global_24446) || func_12()) || func_11(8, -1)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_13()) || Global_96405) || Global_24446) || func_12()) || func_11(8, -1)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_13()) || Global_96405) || Global_24446) || func_12()) || func_11(8, -1)) || func_10()) || func_9()) || func_7()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_13() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_11(8, -1)) || func_7()) || func_6()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_11(8, -1) || func_10()) || func_9()) || func_6()) || func_5())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_13()) || Global_24446) || func_12()) || func_11(8, -1)) || func_9()) || func_8()) || func_7()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_13()) || func_9()) || Global_96405) || Global_24446) || func_12()) || Global_35957) || func_11(8, -1)) || func_8()) || func_6()) || func_7()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_13()) || Global_96405) || Global_24446) || func_12()) || func_11(8, -1)) || func_8()) || func_6()) || func_10()) || func_9()) || func_7())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_5()
{
	return Global_90001.f_1;
}

int func_6()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_7()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_90014.f_291 > 0;
}

bool func_10()
{
	return Global_90014.f_290 > 0;
}

var func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

var func_12()
{
	return Global_1315900;
}

int func_13()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

bool func_14(int iParam0)
{
	return iParam0 < 3;
}

var func_15()
{
	func_16();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_16()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_18(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_17(unk_0x9F92518438215DD0());
			if (func_14(iVar0) && (!func_21(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_14(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, Global_34913);
}

int func_20(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_21(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_22()
{
	unk_0xE60DEFFB2A853900();
}

