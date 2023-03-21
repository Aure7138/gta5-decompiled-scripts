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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (unk_0x78BF2001491914AC(2) || unk_0x237D820559609024())
	{
		unk_0xA232817B0B36F2E5();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar3;
	
	while (!func_8(&iLocal_20))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_20))
	{
		if (!Global_88417)
		{
			unk_0x216B434C1A609F5B(iLocal_20, 1, 1);
			if (unk_0xE897E371352225D5(iLocal_20, 1435919172) != 7)
			{
				unk_0x654FFF4D16298AC5(iLocal_20);
			}
			Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
			unk_0x4C47904AE69D7393(iLocal_20, 1);
			unk_0x219EE6A7B599E7DC(&uVar3);
			if (!unk_0xC4A39E4229BD3ABE(iLocal_20, 0))
			{
				if (!unk_0xC567CF20FD312AC1(iLocal_20, 0) && !unk_0xC4A39E4229BD3ABE(iLocal_20, 0))
				{
					unk_0x7E68A9B1407E9970(0, Var0, 6000);
				}
			}
			unk_0x6B823DB6B46BB1F2(0, Var0, 6000, 0, 2);
			unk_0xBD718C5BA2122192(uVar3);
			unk_0x234E551BB8E8813B(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x2137828D03306CAF(iLocal_20))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_20))
		{
			unk_0x015B50BC21C88C8C(iLocal_20, 1);
		}
		unk_0x6C559FCFFD2365CB(&iLocal_20);
	}
	Global_88417 = 0;
	unk_0xA232817B0B36F2E5();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3732B96D7A1859B4() + 1000;
	while (unk_0x3732B96D7A1859B4() < iVar0 && !unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x769F0F6444C1ABE0(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x2A5EB8B0FE590B91()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0x2A5EB8B0FE590B91()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0x2A5EB8B0FE590B91()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xA2782778D22DC0EA(uParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x2137828D03306CAF(Global_89291[iLocal_18]) && !unk_0x769F0F6444C1ABE0(Global_89291[iLocal_18]))
		{
			if (Global_89291[iLocal_18] != unk_0x2A5EB8B0FE590B91())
			{
				if (!unk_0x03322C3918511AA0(Global_89291[iLocal_18]))
				{
					if (unk_0xC4A39E4229BD3ABE(Global_89291[iLocal_18], 0) || !unk_0xED01C551E3A161C0(Global_89291[iLocal_18]))
					{
						if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(Global_89291[iLocal_18], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_89291[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0x2FF6D1D6A0790F5A(Global_89291[iLocal_18], unk_0x2A5EB8B0FE590B91(), 17))
									{
										if (unk_0xC4A39E4229BD3ABE(Global_89291[iLocal_18], 0))
										{
											iVar0 = unk_0x0C20E539D876C5B3(Global_89291[iLocal_18], 0);
										}
										if ((unk_0x2137828D03306CAF(iVar0) && unk_0x7FAC45D56235AB39(iVar0, 0)) || !unk_0x2137828D03306CAF(iVar0))
										{
											*uParam0 = Global_89291[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_6(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_5(unk_0x2A5EB8B0FE590B91());
			if (func_7(iVar0) && (!func_11(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_7(Global_103236.f_2164.f_539.f_4301))
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

bool func_11(int iParam0)
{
	return Global_35813 == iParam0;
}

