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
	if (unk_0x24862A9CDC8F8874(2) || unk_0x14D073A27F804A90())
	{
		unk_0xA4E0D8FD51F2A6F7();
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
	if (!unk_0x2DC9BA2299B45EA6(iLocal_20))
	{
		if (!Global_87934)
		{
			unk_0xFD816D0E738EB817(iLocal_20, 1, 1);
			if (unk_0x090C65D5190A249D(iLocal_20, 1435919172) != 7)
			{
				unk_0x5124C5FA52D2AF3E(iLocal_20);
			}
			Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0) };
			unk_0xAAD662D7E0D59F4C(iLocal_20, 1);
			unk_0x3E2E609450787FFE(&uVar3);
			if (!unk_0x277ECDA23D8CCEB4(iLocal_20, 0))
			{
				if (!unk_0xA81F17D63315B662(iLocal_20, 0) && !unk_0x277ECDA23D8CCEB4(iLocal_20, 0))
				{
					unk_0x7FFE31040063EDAE(0, Var0, 6000);
				}
			}
			unk_0x170E3F679C0C8F29(0, Var0, 6000, 0, 2);
			unk_0x939BC11172AA1303(uVar3);
			unk_0xBFE865E3B513451B(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_20))
	{
		if (!unk_0x2DC9BA2299B45EA6(iLocal_20))
		{
			unk_0xF1A02DDEC7E15D6E(iLocal_20, 1);
		}
		unk_0x459A6F82E024C891(&iLocal_20);
	}
	Global_87934 = 0;
	unk_0xA4E0D8FD51F2A6F7();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x693EBB4F13506457() + 1000;
	while (unk_0x693EBB4F13506457() < iVar0 && !unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2DC9BA2299B45EA6(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xC8B93D94F8954288()))
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
			switch (func_5(unk_0xC8B93D94F8954288()))
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
			switch (func_5(unk_0xC8B93D94F8954288()))
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
	unk_0x7033366221CC71C6(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
		if (unk_0x95CCECA3948CFE7B(Global_88808[iLocal_18]) && !unk_0x2DC9BA2299B45EA6(Global_88808[iLocal_18]))
		{
			if (Global_88808[iLocal_18] != unk_0xC8B93D94F8954288())
			{
				if (!unk_0xD28A89C669EAD2E4(Global_88808[iLocal_18]))
				{
					if (unk_0x277ECDA23D8CCEB4(Global_88808[iLocal_18], 0) || !unk_0xB0A9B470CE75BF12(Global_88808[iLocal_18]))
					{
						if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(Global_88808[iLocal_18], 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_88808[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0x164373F9651C2457(Global_88808[iLocal_18], unk_0xC8B93D94F8954288(), 17))
									{
										if (unk_0x277ECDA23D8CCEB4(Global_88808[iLocal_18], 0))
										{
											iVar0 = unk_0x275BEBE583A163B5(Global_88808[iLocal_18], 0);
										}
										if ((unk_0x95CCECA3948CFE7B(iVar0) && unk_0x5D42322C7DB888D0(iVar0, 0)) || !unk_0x95CCECA3948CFE7B(iVar0))
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
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_6(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_5(unk_0xC8B93D94F8954288());
			if (func_7(iVar0) && (!func_11(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_7(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_11(int iParam0)
{
	return Global_35700 == iParam0;
}

