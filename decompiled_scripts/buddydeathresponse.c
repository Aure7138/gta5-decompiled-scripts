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
	if (unk_0xBCA819F9975BEDFA(2) || unk_0xC190A6722E8665F6())
	{
		unk_0x921053BAF754303D();
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
	if (!unk_0xCA41A00932714525(iLocal_20))
	{
		if (!Global_88319)
		{
			unk_0xF0F77C99098F999B(iLocal_20, 1, 1);
			if (unk_0x1F8F07D86DA1A701(iLocal_20, 1435919172) != 7)
			{
				unk_0x15848523A8959DBC(iLocal_20);
			}
			Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0) };
			unk_0xCC61640A821F277C(iLocal_20, 1);
			unk_0x86DD54980FE55567(&uVar3);
			if (!unk_0xFD0FE723227D5AB6(iLocal_20, 0))
			{
				if (!unk_0x018477A7947BC4B4(iLocal_20, 0) && !unk_0xFD0FE723227D5AB6(iLocal_20, 0))
				{
					unk_0x9F7BF6124414BCF4(0, Var0, 6000);
				}
			}
			unk_0x0D322CDF37087C0E(0, Var0, 6000, 0, 2);
			unk_0x007AE2AA9E15FA7B(uVar3);
			unk_0x00E85C3B3BD34B10(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x25BD4C26D84038CD())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x23E9113C762466ED(iLocal_20))
	{
		if (!unk_0xCA41A00932714525(iLocal_20))
		{
			unk_0x650BB0E111420EAF(iLocal_20, 1);
		}
		unk_0x6500ADB01E821BC0(&iLocal_20);
	}
	Global_88319 = 0;
	unk_0x921053BAF754303D();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x94E3E074F38DF86C() + 1000;
	while (unk_0x94E3E074F38DF86C() < iVar0 && !unk_0x25BD4C26D84038CD())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xCA41A00932714525(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x17B5CC8A8615737D()))
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
			switch (func_5(unk_0x17B5CC8A8615737D()))
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
			switch (func_5(unk_0x17B5CC8A8615737D()))
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
	unk_0xECF05B7D463A3321(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
		if (unk_0x23E9113C762466ED(Global_89193[iLocal_18]) && !unk_0xCA41A00932714525(Global_89193[iLocal_18]))
		{
			if (Global_89193[iLocal_18] != unk_0x17B5CC8A8615737D())
			{
				if (!unk_0xC26429B504BA534D(Global_89193[iLocal_18]))
				{
					if (unk_0xFD0FE723227D5AB6(Global_89193[iLocal_18], 0) || !unk_0xDDBA7A42B9B819EE(Global_89193[iLocal_18]))
					{
						if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(Global_89193[iLocal_18], 1), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_89193[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0x7F5C1711F4E1FDF7(Global_89193[iLocal_18], unk_0x17B5CC8A8615737D(), 17))
									{
										if (unk_0xFD0FE723227D5AB6(Global_89193[iLocal_18], 0))
										{
											iVar0 = unk_0x60604E51E30D25B8(Global_89193[iLocal_18], 0);
										}
										if ((unk_0x23E9113C762466ED(iVar0) && unk_0x45CD66F0A131E554(iVar0, 0)) || !unk_0x23E9113C762466ED(iVar0))
										{
											*uParam0 = Global_89193[iLocal_18];
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
	if (unk_0x25BD4C26D84038CD())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_6(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_5(unk_0x17B5CC8A8615737D());
			if (func_7(iVar0) && (!func_11(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_7(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_11(int iParam0)
{
	return Global_35781 == iParam0;
}

