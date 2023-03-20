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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[10];
	char* sLocal_159[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_36 = 1;
	iLocal_37 = 1;
	iLocal_39 = joaat("prop_time_capsule_01");
	if (unk_0x8D841F1DD3FA555F(210))
	{
		func_49();
	}
	if (unk_0x968BF1C2C695B61A(joaat("epsilontract")) > 1)
	{
		unk_0xC23A229F78DAD92A();
	}
	func_48(9);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		switch (iLocal_38)
		{
			case 0:
				func_47();
				break;
			
			case 1:
				func_1();
				break;
			
			case 2:
				func_49();
				break;
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if ((func_46(unk_0x81873881071CD9FE()) && !func_45(14)) && !unk_0x29AFA2493D7C23D0())
	{
		if (iLocal_40 < 10)
		{
			if (iLocal_40 == 0)
			{
				if (!func_44(36) && (unk_0x48E480685981C7D4() - iLocal_41) > iLocal_42)
				{
					func_43(0, 60, sLocal_159[0], 1, 0, 0, 0, 0, 1);
					func_42(36);
					iLocal_41 = -1;
				}
			}
			else if (iLocal_40 < 10)
			{
				if (!iLocal_41 == -1)
				{
					if ((unk_0x48E480685981C7D4() - iLocal_41) > 15000)
					{
						func_43(0, 60, sLocal_159[iLocal_40], 1, 0, 0, 0, 0, 1);
						iLocal_41 = -1;
					}
				}
			}
			if (Local_48[iLocal_40 /*11*/].f_10)
			{
				if (unk_0x0AEC8EB3EC414C02(Local_48[iLocal_40 /*11*/].f_1) || func_41(Local_48[iLocal_40 /*11*/].f_1))
				{
					if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
					{
						unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
					}
					func_40(&(Local_48[iLocal_40 /*11*/].f_1));
					Local_48[iLocal_40 /*11*/].f_10 = 0;
					unk_0x8C7933B8CC1FCB35(0, 200, 250);
					iVar0 = (805 + iLocal_40);
					func_39(iVar0, 1, -1, 1);
					unk_0xBC5CB8ACC4EE71EB(joaat("num_hidden_packages_2"), 1f);
					bLocal_45 = true;
					if (iLocal_40 < 10)
					{
						iLocal_40++;
						iLocal_41 = unk_0x48E480685981C7D4();
						func_38(1, 0);
						func_36();
					}
				}
				else if (unk_0x7423A8514A6F26DA(Local_48[iLocal_40 /*11*/].f_1))
				{
					func_34(Local_48[iLocal_40 /*11*/].f_3);
					func_33(&(Local_48[iLocal_40 /*11*/].f_1), &(Local_48[iLocal_40 /*11*/].f_10));
				}
			}
			else
			{
				while (func_32(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_40)
				{
					func_30(&(Local_48[iLocal_40 /*11*/]), iLocal_39, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_46 && !bLocal_45)
		{
			func_13();
		}
		func_2(&bLocal_45, &bLocal_46, &uLocal_47, 4, &uLocal_43, &uLocal_44, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_12(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*uParam5 = unk_0x95EF972E3A07B525("MIDSIZED_MESSAGE");
				if (unk_0xCC8E3BAC62A29F42(*uParam5))
				{
					iVar0 = unk_0xEDDCCC3D357A50F8();
					if (iParam3 == 6)
					{
						unk_0x35D7948F61AA3FEC(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x35D7948F61AA3FEC(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				unk_0x21ED0FC9B5CC748B(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x6CE839BF5D87A428(sParam6);
				unk_0xC3822F70D0E7940B();
				unk_0x6CE839BF5D87A428(sParam7);
				unk_0x6D55FF05D62B91BC(func_4(iParam3));
				unk_0xC3822F70D0E7940B();
				unk_0xBA9BA6181F2B6111();
				*uParam2 = unk_0x48E480685981C7D4();
				*uParam4++;
				break;
			
			case 2:
				if ((unk_0x48E480685981C7D4() - *uParam2) > 7000)
				{
					unk_0x21ED0FC9B5CC748B(*uParam5, "SHARD_ANIM_OUT");
					unk_0xBD0C54D89298454E(1);
					unk_0x518198639630AE08(0.33f);
					unk_0xBA9BA6181F2B6111();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0xCC8E3BAC62A29F42(*uParam5))
					{
						func_12(1);
						unk_0x88188CE25DF2572C(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x48E480685981C7D4() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0xCC8E3BAC62A29F42(*uParam5))
					{
						func_12(1);
						unk_0x88188CE25DF2572C(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xCC8E3BAC62A29F42(*uParam5))
				{
					unk_0x4B6F01DE8CCE643E(uParam5);
				}
				func_12(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

int func_3()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			if (unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_108, func_10(func_11(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x85C45034BA638694(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x85C45034BA638694(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x85C45034BA638694(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			iVar2 = (func_9(iParam0) + iVar1);
			if (func_5(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_7(iParam0, iParam1);
	uVar2 = func_6(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x864ED3213B1F4AED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
	}
	return iVar0;
}

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		iVar0 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_8()
{
	return Global_1312729;
}

int func_9(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_11(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_12(int iParam0)
{
	if (Global_69287 != iParam0)
	{
		Global_69287 = iParam0;
	}
}

void func_13()
{
	func_29(95, 1);
	func_15(27, 84, 0);
	func_14(9);
	iLocal_38 = 2;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[iVar0], iVar1))
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_7699.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_27(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45806[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45806[iVar0 /*203*/].f_2 = iParam0;
	Global_45806[iVar0 /*203*/].f_10[Global_45806[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45806[iVar0 /*203*/].f_10[Global_45806[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45806[iVar0 /*203*/].f_10[Global_45806[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45806[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45806[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45806[iVar0 /*203*/].f_4[iVar1] == Global_36506[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45806[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45806[iVar0 /*203*/].f_4[Global_45806[iVar0 /*203*/].f_3] = Global_36506[iParam1 /*12*/].f_3;
			Global_45806[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45806[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45806[iVar0 /*203*/].f_4[iVar1] == Global_36506[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45806[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45806[iVar0 /*203*/].f_4[Global_45806[iVar0 /*203*/].f_3] = Global_36506[iParam1 /*12*/].f_2;
			Global_45806[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45806[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45806[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_16(Global_45806[iVar0 /*203*/].f_4[iVar1], Global_45806[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_39831[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39831[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_26(Global_36506[iVar20 /*12*/].f_1) };
		if (Global_36506[iVar20 /*12*/].f_2 == iParam0 && !Global_36506[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36506[iVar20 /*12*/].f_2;
		iVar0 = Global_45444[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45444[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36498 = (Global_36498 - 1);
						if (Global_36498 < 0)
						{
							Global_36498 = 0;
						}
						break;
					
					case 1:
						Global_36499 = (Global_36499 - 1);
						if (Global_36499 < 0)
						{
							Global_36499 = 0;
						}
						break;
					
					case 2:
						Global_36500 = (Global_36500 - 1);
						if (Global_36500 < 0)
						{
							Global_36500 = 0;
						}
						break;
					}
				}
		}
		Global_45444[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45444[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45444[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45444[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45444[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45444[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45444[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45444[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36498 = (Global_36498 - 1);
						if (Global_36498 < 0)
						{
							Global_36498 = 0;
						}
						break;
					
					case 1:
						Global_36499 = (Global_36499 - 1);
						if (Global_36499 < 0)
						{
							Global_36499 = 0;
						}
						break;
					
					case 2:
						Global_36500 = (Global_36500 - 1);
						if (Global_36500 < 0)
						{
							Global_36500 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_45806[iVar24 /*203*/].f_1 == iParam1 && Global_45806[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45444[iParam0 /*120*/].f_18[iVar0] = Global_45806[iVar23 /*203*/].f_1;
		Global_45444[iParam0 /*120*/].f_1[iVar0] = (Global_45806[iVar23 /*203*/].f_9 - 1);
		Global_45444[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45444[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45444[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45444[iParam0 /*120*/]++;
		iVar25 = Global_45444[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45806[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36506[iVar26 /*12*/].f_2;
		if (Global_45806[iVar23 /*203*/].f_10[(Global_45806[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45806[iVar23 /*203*/].f_10[(Global_45806[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_26(Global_36506[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45444[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_17(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_17(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_17(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_17(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x521385D8214D27C4())
	{
		return;
	}
	iVar0 = func_21();
	bVar1 = false;
	StringCopy(&cVar2, func_20(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x02A6B267064771B1("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x02A6B267064771B1("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x02A6B267064771B1("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x02A6B267064771B1(sParam3);
				if (!unk_0xB318FDA0D1ABDB20(iParam4))
				{
					unk_0x072D7B028D6C7A05(iParam4);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam5))
				{
					unk_0x072D7B028D6C7A05(iParam5);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam6))
				{
					unk_0x072D7B028D6C7A05(iParam6);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam7))
				{
					unk_0x072D7B028D6C7A05(iParam7);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam8))
				{
					unk_0x072D7B028D6C7A05(iParam8);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam9))
				{
					unk_0x072D7B028D6C7A05(iParam9);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam10))
				{
					unk_0x072D7B028D6C7A05(iParam10);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam11))
				{
					unk_0x072D7B028D6C7A05(iParam11);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam12))
				{
					unk_0x072D7B028D6C7A05(iParam12);
				}
				if (!unk_0xB318FDA0D1ABDB20(iParam13))
				{
					unk_0x072D7B028D6C7A05(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_18(unk_0xDFBE4FFEF7FC22F3(&cVar2, &cVar2, 0, 2, unk_0x46E7F5908F815DDC(func_19(iParam1)), 0));
		}
		else
		{
			func_18(unk_0xDFBE4FFEF7FC22F3("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x46E7F5908F815DDC(func_19(iParam1)), 0));
		}
		switch (Global_14394)
		{
			case 0:
				StringCopy(&Global_14383, "Phone_SoundSet_Michael", 24);
				Global_36498++;
				if (Global_36498 > 16)
				{
					Global_36498 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14383, "Phone_SoundSet_Trevor", 24);
				Global_36500++;
				if (Global_36500 > 16)
				{
					Global_36500 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14383, "Phone_SoundSet_Franklin", 24);
				Global_36499++;
				if (Global_36499 > 16)
				{
					Global_36499 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14383, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x35D7948F61AA3FEC(-1, "Notification", &Global_14383, 1);
	}
}

void func_18(var uParam0)
{
	Global_36501[Global_36505] = uParam0;
	Global_16751 = 1;
	Global_16750 = uParam0;
	Global_36505++;
	if (Global_36505 == 3)
	{
		Global_36505 = 0;
	}
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_20(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[0 /*29*/].f_7));
		
		case 1:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[1 /*29*/].f_7));
		
		case 2:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[2 /*29*/].f_7));
		
		case 7:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[12 /*29*/].f_7));
		
		case 4:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[60 /*29*/].f_7));
		
		case 6:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[62 /*29*/].f_7));
		
		case 3:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[14 /*29*/].f_7));
		
		case 16:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[97 /*29*/].f_7));
		
		case 19:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[99 /*29*/].f_7));
		
		case 15:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[15 /*29*/].f_7));
		
		case 26:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[30 /*29*/].f_7));
		
		case 27:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[17 /*29*/].f_7));
		
		case 29:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[20 /*29*/].f_7));
		
		case 30:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[43 /*29*/].f_7));
		
		case 31:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[44 /*29*/].f_7));
		
		case 32:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[19 /*29*/].f_7));
		
		case 34:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[40 /*29*/].f_7));
		
		case 36:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[22 /*29*/].f_7));
		
		case 38:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[122 /*29*/].f_7));
		
		case 40:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[125 /*29*/].f_7));
		
		case 41:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[113 /*29*/].f_7));
		
		case 42:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[126 /*29*/].f_7));
		
		case 43:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[127 /*29*/].f_7));
		
		case 44:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[124 /*29*/].f_7));
		
		case 45:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[114 /*29*/].f_7));
		
		case 46:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[115 /*29*/].f_7));
		
		case 47:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[116 /*29*/].f_7));
		
		case 48:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[123 /*29*/].f_7));
		
		case 49:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[117 /*29*/].f_7));
		
		case 50:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[118 /*29*/].f_7));
		
		case 51:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[119 /*29*/].f_7));
		
		case 52:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[120 /*29*/].f_7));
		
		case 53:
			return unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

var func_21()
{
	func_22();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_25(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_24(unk_0x81873881071CD9FE());
			if (func_23(iVar0) && (!func_45(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_23(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

struct<16> func_26(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_28(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45806[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45806[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45806[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45806[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45806[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45806[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45806[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45806[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45444[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45444[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45444[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45444[iVar6 /*120*/].f_18[iVar8] == Global_45806[iVar4 /*203*/].f_1)
							{
								if (Global_45444[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36498 = (Global_36498 - 1);
											break;
										
										case 1:
											Global_36499 = (Global_36499 - 1);
											break;
										
										case 2:
											Global_36500 = (Global_36500 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_45806[iVar4 /*203*/].f_2 = iParam0;
	Global_45806[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45806[iVar4 /*203*/] = 1;
	}
	Global_98931.f_25486.f_310++;
	if (Global_98931.f_25486.f_310 == 0)
	{
		Global_98931.f_25486.f_310 = 1;
	}
	Global_45806[iVar4 /*203*/].f_1 = Global_98931.f_25486.f_310;
	Global_45806[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_45806[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45806[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45806[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_29(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_98931.f_7699.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_98931.f_7699.f_99.f_58[iParam0] = iParam1;
}

void func_30(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (!func_45(13) && !func_45(14))
			{
				if (!unk_0x7423A8514A6F26DA(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x32A12757CBF48A33(iParam1);
						while (!unk_0x33ACB874CECA2D4B(iParam1))
						{
							unk_0x32A12757CBF48A33(iParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_31(uParam0->f_3);
						}
						unk_0x7C6BF0CD5D7454C9(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xF3148AAF69AF9CBC(&uVar0, 1);
							uParam0->f_1 = unk_0x087C450D4ED68A11(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0xF3148AAF69AF9CBC(&uVar0, 3);
							unk_0xF3148AAF69AF9CBC(&uVar0, 4);
							unk_0xF3148AAF69AF9CBC(&uVar0, 8);
							unk_0xF3148AAF69AF9CBC(&uVar0, 1);
							uParam0->f_1 = unk_0xB2486A72F6F99B4C(iParam2, uParam0->f_3, uVar0, -1, 1, iParam1);
						}
						unk_0x887F4488DA99FD21(iParam1);
					}
				}
			}
			if (unk_0x7423A8514A6F26DA(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_31(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xB3202EEA6EFADBA8(Param0);
	if (unk_0x59F36F53A82C2E72(uVar0))
	{
		unk_0xC9C56731782E64CD(uVar0);
		while (!unk_0x9B710BA2688DD221(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0x2912C2F5F69CF538(uVar0);
	}
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, -1, -1);
}

void func_33(var uParam0, var uParam1)
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x6212DFFA012D5E5B(*uParam0), 1) >= 60f)
		{
			func_40(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_34(struct<3> Param0)
{
	if (func_35(unk_0x81873881071CD9FE(), Param0, 7f))
	{
		unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), Param0, 100, 2048, 1);
	}
}

bool func_35(var uParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_36()
{
	if (func_37(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_37(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_38(int iParam0, int iParam1)
{
	Global_90848.f_7 = iParam0;
	Global_90848.f_8 = iParam1;
}

int func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		iVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(iVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_40(var uParam0)
{
	if (unk_0x7423A8514A6F26DA(*uParam0))
	{
		unk_0xA8FBABD3B6C9A9C9(*uParam0);
	}
}

int func_41(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x7423A8514A6F26DA(uParam0))
	{
		return 0;
	}
	if (func_46(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			iVar1 = unk_0x14B7103DBD149FFE(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x6212DFFA012D5E5B(uParam0)) < (5f * 5f) || unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), unk_0xB64122C236BD58A4(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

int func_43(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		
		case 1:
			iVar0 = 22;
			break;
		
		case 2:
			iVar0 = 23;
			break;
		
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_98931.f_12755[iVar0 /*104*/]), sParam2, 64);
	Global_98931.f_12755[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_98931.f_12755[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_98931.f_12755[iVar0 /*104*/].f_25 = iParam4;
	Global_98931.f_12755[iVar0 /*104*/].f_26 = iParam5;
	Global_98931.f_12755[iVar0 /*104*/].f_29 = iParam6;
	Global_98931.f_12755[iVar0 /*104*/].f_30 = iParam8;
	Global_98931.f_12755[iVar0 /*104*/].f_31 = iParam7;
	Global_98931.f_12755[iVar0 /*104*/].f_28 = 0;
	return 1;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_46(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_47()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_98931.f_17188.f_388)
	{
		sLocal_159[0] = "TRACT_HINT1B";
		iLocal_42 = 300000;
	}
	else
	{
		sLocal_159[0] = "TRACT_HINT1";
		iLocal_42 = 16000;
	}
	Local_48[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_48[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_159[1] = "TRACT_HINT2";
	Local_48[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_159[2] = "TRACT_HINT3";
	Local_48[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_159[3] = "TRACT_HINT4";
	Local_48[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_159[4] = "TRACT_HINT5";
	Local_48[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_159[5] = "TRACT_HINT6";
	Local_48[6 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_159[6] = "TRACT_HINT7";
	Local_48[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_159[7] = "TRACT_HINT8";
	Local_48[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_159[8] = "TRACT_HINT9";
	Local_48[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_159[9] = "TRACT_HINT10";
	iLocal_41 = unk_0x48E480685981C7D4();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (func_5(iVar1, -1, -1))
		{
			iLocal_40++;
		}
		iVar0++;
	}
	iLocal_38 = 1;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_7699.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_40(&(Local_48[iVar0 /*11*/].f_1));
		iVar0++;
	}
	unk_0xC23A229F78DAD92A();
}

