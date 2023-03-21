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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { ScriptParam_0.f_1[0 /*3*/] };
	func_22();
	if (unk_0x78BF2001491914AC(11))
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC6D11983DAD48A48())
		{
			if (func_3(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_44 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_2();
						}
						break;
					
					case 1:
						if (iLocal_51 == 0)
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
		if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_45, 10f, 10f, 10f, 0, 1, 0) && !unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_45, 3f, 3f, 3f, 0, 1, 0))
		{
			unk_0x5AE11BC36633DE4E(0);
			Local_48 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			unk_0x219EE6A7B599E7DC(&uLocal_54);
			unk_0x7E68A9B1407E9970(0, Local_48, 0);
			unk_0xF1C3427BFED79E6B(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xBD718C5BA2122192(uLocal_54);
			if (!unk_0xA9A04898798AE9E6(uLocal_52, 0))
			{
				unk_0x234E551BB8E8813B(uLocal_52, uLocal_54);
			}
			unk_0xEDD36C58DDE03C8F(&uLocal_54);
		}
		if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_45, 3f, 3f, 3f, 0, 1, 0))
		{
			Local_48 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			unk_0x5AE11BC36633DE4E(0);
			unk_0x219EE6A7B599E7DC(&uLocal_54);
			unk_0x7E68A9B1407E9970(0, Local_48, 0);
			unk_0xF1C3427BFED79E6B(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xBD718C5BA2122192(uLocal_54);
			if (!unk_0xA9A04898798AE9E6(uLocal_52, 0))
			{
				unk_0x234E551BB8E8813B(uLocal_52, uLocal_54);
			}
			unk_0xEDD36C58DDE03C8F(&uLocal_54);
		}
	}
}

void func_2()
{
	iLocal_51 = unk_0x895FB9FE885E36ED(0, 2);
	if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_45, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0x0F39DF6675B2333E(joaat("a_f_m_bevhills_02"));
		unk_0x0F39DF6675B2333E(joaat("g_m_y_mexgoon_02"));
		while (!unk_0xA1FC9D7AEA164881(joaat("a_f_m_bevhills_02")) || !unk_0xA1FC9D7AEA164881(joaat("g_m_y_mexgoon_02")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA7C81DED990D3418("amb@BUSKER");
		while (!unk_0x45834D6C20FFF689("amb@BUSKER"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		Local_48.f_2 = (Local_45.f_2 - 1f);
		uLocal_52 = unk_0xD00B79C0E206E082(19, joaat("g_m_y_mexgoon_02"), Local_45.f_0, Local_45.f_1, Local_48.f_2, 0f, 1, 1);
		if (!unk_0xA9A04898798AE9E6(uLocal_52, 0))
		{
			unk_0x219EE6A7B599E7DC(&uLocal_54);
			unk_0x7E68A9B1407E9970(0, Local_48, 0);
			unk_0xF1C3427BFED79E6B(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xBD718C5BA2122192(uLocal_54);
			unk_0x234E551BB8E8813B(uLocal_52, uLocal_54);
			unk_0xEDD36C58DDE03C8F(&uLocal_54);
		}
		if (iLocal_51 == 1)
		{
			Local_48 = { unk_0x82D9CF397BA8C885(uLocal_52, 3.8f, 0.8f, 0f) };
			iLocal_53 = unk_0xD00B79C0E206E082(5, joaat("a_f_m_bevhills_02"), Local_48, 0f, 1, 1);
			if (!unk_0xA9A04898798AE9E6(iLocal_53, 0))
			{
				unk_0x7E68A9B1407E9970(iLocal_53, Local_45, 0);
			}
		}
		iLocal_44 = 1;
	}
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
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
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
						if (((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_13()) || Global_102283) || Global_25224) || func_12()) || func_11(8, -1)) || func_10()) || func_9()) || func_8()) || func_7()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1) || func_13()) || Global_25224) || func_12()) || func_11(8, -1)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_13()) || Global_102283) || Global_25224) || func_12()) || func_11(8, -1)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_103236.f_7469.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_13()) || Global_102283) || Global_25224) || func_12()) || func_11(8, -1)) || func_10()) || func_9()) || func_7()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_13() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || func_11(8, -1)) || func_7()) || func_6()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_11(8, -1) || func_10()) || func_9()) || func_6()) || func_5())
						{
							return 0;
						}
						if ((unk_0x0AFBA1AD6DC1C540() && unk_0xD7037D74D866BD7D() != 3) && unk_0xE858C2EA240D3C68() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
						{
							if ((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_13()) || Global_25224) || func_12()) || func_11(8, -1)) || func_9()) || func_8()) || func_7()) || Global_103236.f_7469.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || func_13()) || func_9()) || Global_102283) || Global_25224) || func_12()) || Global_36944) || func_11(8, -1)) || func_8()) || func_6()) || func_7()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_13()) || Global_102283) || Global_25224) || func_12()) || func_11(8, -1)) || func_8()) || func_6()) || func_10()) || func_9()) || func_7())
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
	return Global_91816.f_1;
}

int func_6()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 13);
	}
	return 0;
}

int func_7()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_91829.f_310 > 0;
}

bool func_10()
{
	return Global_91829.f_309 > 0;
}

var func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

var func_12()
{
	return Global_1312852;
}

int func_13()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
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
	return Global_103236.f_2164.f_539.f_4301;
}

void func_16()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_18(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_17(unk_0x2A5EB8B0FE590B91());
			if (func_14(iVar0) && (!func_21(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_14(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, Global_35813);
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
	return Global_35813 == iParam0;
}

void func_22()
{
	unk_0xA232817B0B36F2E5();
}

