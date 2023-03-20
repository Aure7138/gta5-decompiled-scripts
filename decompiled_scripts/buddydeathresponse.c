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
	if (unk_0x4B4BD87E3D30C50D(2) || unk_0x79AEE91B110CB04B())
	{
		unk_0x2F798BA2098FDADE();
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
	if (!unk_0x1E80C02AC16B6622(iLocal_20))
	{
		if (!Global_87934)
		{
			unk_0x8D429A827A931AC9(iLocal_20, 1, 1);
			if (unk_0x49C650267EDFEBC6(iLocal_20, 1435919172) != 7)
			{
				unk_0xE2CB8488CFA42209(iLocal_20);
			}
			Var0 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0) };
			unk_0x9526D9575C237F2F(iLocal_20, 1);
			unk_0x2A6B9F9E71C479CF(&uVar3);
			if (!unk_0xB42592B9FFEB5EDE(iLocal_20, 0))
			{
				if (!unk_0x1CC086F95707C553(iLocal_20, 0) && !unk_0xB42592B9FFEB5EDE(iLocal_20, 0))
				{
					unk_0x5E56FBBFC6919211(0, Var0, 6000);
				}
			}
			unk_0xF8910DF6BD994091(0, Var0, 6000, 0, 2);
			unk_0x44642CB08FA1637E(uVar3);
			unk_0xB8A8FA4B28E9F423(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x2CC731F9E664299E())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x1F2158D615BC4B25(iLocal_20))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_20))
		{
			unk_0x112CD899A3BEE719(iLocal_20, 1);
		}
		unk_0xA29D53AF339F4CD0(&iLocal_20);
	}
	Global_87934 = 0;
	unk_0x2F798BA2098FDADE();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3EAC9995EC220C5A() + 1000;
	while (unk_0x3EAC9995EC220C5A() < iVar0 && !unk_0x2CC731F9E664299E())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x1E80C02AC16B6622(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x77F050A399DB77ED()))
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
			switch (func_5(unk_0x77F050A399DB77ED()))
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
			switch (func_5(unk_0x77F050A399DB77ED()))
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
	unk_0x630E218FE7E4C793(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
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
		if (unk_0x1F2158D615BC4B25(Global_88808[iLocal_18]) && !unk_0x1E80C02AC16B6622(Global_88808[iLocal_18]))
		{
			if (Global_88808[iLocal_18] != unk_0x77F050A399DB77ED())
			{
				if (!unk_0x335346A332B62CA2(Global_88808[iLocal_18]))
				{
					if (unk_0xB42592B9FFEB5EDE(Global_88808[iLocal_18], 0) || !unk_0x540DDE9BB09221C3(Global_88808[iLocal_18]))
					{
						if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(Global_88808[iLocal_18], 1), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_88808[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0xC76E1A07C6272140(Global_88808[iLocal_18], unk_0x77F050A399DB77ED(), 17))
									{
										if (unk_0xB42592B9FFEB5EDE(Global_88808[iLocal_18], 0))
										{
											iVar0 = unk_0xF8D66A34AF0C53A5(Global_88808[iLocal_18], 0);
										}
										if ((unk_0x1F2158D615BC4B25(iVar0) && unk_0x968EA16107097324(iVar0, 0)) || !unk_0x1F2158D615BC4B25(iVar0))
										{
											*uParam0 = Global_88808[iLocal_18];
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
	if (unk_0x2CC731F9E664299E())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_6(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_5(unk_0x77F050A399DB77ED());
			if (func_7(iVar0) && (!func_11(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_7(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_11(int iParam0)
{
	return Global_35700 == iParam0;
}

