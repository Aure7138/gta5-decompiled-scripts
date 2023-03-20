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
	if (unk_0x89522B8E487D4EF9(2) || unk_0x60C4884A6137D544())
	{
		unk_0x52F20802944F8DCE();
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
	if (!unk_0xAF437D7C802AB246(iLocal_20))
	{
		if (!Global_87853)
		{
			unk_0x20BB4B94CC6DDC9A(iLocal_20, 1, 1);
			if (unk_0xC47857E5E74EA5AF(iLocal_20, 1435919172) != 7)
			{
				unk_0xFA2C5C2D054C888E(iLocal_20);
			}
			Var0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0) };
			unk_0x9BEE7E791BC4D38B(iLocal_20, 1);
			unk_0x94026C1D1DB14225(&uVar3);
			if (!unk_0x51374A0BB2871E6E(iLocal_20, 0))
			{
				if (!unk_0x0930CF2B56CCE2B8(iLocal_20, 0) && !unk_0x51374A0BB2871E6E(iLocal_20, 0))
				{
					unk_0xDE6D5CD5475B6C9F(0, Var0, 6000);
				}
			}
			unk_0x27ADB0309A9865E0(0, Var0, 6000, 0, 2);
			unk_0x911ECBCE73F8EC3F(uVar3);
			unk_0xC2C4A3A9FF2FBFFF(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0xAEF17BDE274A1247())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_20))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_20))
		{
			unk_0x8D6671D78D1F569B(iLocal_20, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_20);
	}
	Global_87853 = 0;
	unk_0x52F20802944F8DCE();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9D40BBF80D8F5E8A() + 1000;
	while (unk_0x9D40BBF80D8F5E8A() < iVar0 && !unk_0xAEF17BDE274A1247())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xAF437D7C802AB246(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xE7869D5D7816A9B6()))
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
			switch (func_5(unk_0xE7869D5D7816A9B6()))
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
			switch (func_5(unk_0xE7869D5D7816A9B6()))
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
	unk_0x63170E828689585A(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
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
		if (unk_0xD51CFE69539DB6D8(Global_88727[iLocal_18]) && !unk_0xAF437D7C802AB246(Global_88727[iLocal_18]))
		{
			if (Global_88727[iLocal_18] != unk_0xE7869D5D7816A9B6())
			{
				if (!unk_0x28D33422BA6C479D(Global_88727[iLocal_18]))
				{
					if (unk_0x51374A0BB2871E6E(Global_88727[iLocal_18], 0) || !unk_0xD55D878601C46BA9(Global_88727[iLocal_18]))
					{
						if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(Global_88727[iLocal_18], 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_88727[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0xF70F7CD913F23E2A(Global_88727[iLocal_18], unk_0xE7869D5D7816A9B6(), 17))
									{
										if (unk_0x51374A0BB2871E6E(Global_88727[iLocal_18], 0))
										{
											iVar0 = unk_0xF0295FF51F2D7803(Global_88727[iLocal_18], 0);
										}
										if ((unk_0xD51CFE69539DB6D8(iVar0) && unk_0xC45A34912542C4EB(iVar0, 0)) || !unk_0xD51CFE69539DB6D8(iVar0))
										{
											*uParam0 = Global_88727[iLocal_18];
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
	if (unk_0xAEF17BDE274A1247())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_6(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_5(unk_0xE7869D5D7816A9B6());
			if (func_7(iVar0) && (!func_11(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_7(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_11(int iParam0)
{
	return Global_35619 == iParam0;
}

