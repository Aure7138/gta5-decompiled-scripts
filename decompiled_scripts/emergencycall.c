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
	int iLocal_47 = 0;
	var uLocal_48 = 0;
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
	if (unk_0x2C897F101BA20806(11))
	{
		iLocal_42 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			switch (iLocal_42)
			{
				case 0:
					func_5();
					break;
				
				case 1:
					break;
				
				case 2:
					func_4();
					if (unk_0x1DAD7CE53BEE7710())
					{
						if (unk_0x5A62ACF1A0701002(7, unk_0xA16EC202D9D35357(), 2, 3f, &uLocal_48))
						{
							iLocal_47 = unk_0x09560C7DE2A384BD();
							iLocal_42 = 5;
						}
					}
					else if (unk_0xE37B6C5305D21FE9(7, Local_44, 2, 3f, &uLocal_48))
					{
						iLocal_47 = unk_0x09560C7DE2A384BD();
						iLocal_42 = 5;
					}
					break;
				
				case 3:
					func_4();
					if (unk_0x1DAD7CE53BEE7710())
					{
						if (unk_0x5A62ACF1A0701002(5, unk_0xA16EC202D9D35357(), 2, 3f, &uLocal_48))
						{
							iLocal_47 = unk_0x09560C7DE2A384BD();
							iLocal_42 = 5;
						}
					}
					else if (unk_0xE37B6C5305D21FE9(5, Local_44, 2, 3f, &uLocal_48))
					{
						iLocal_47 = unk_0x09560C7DE2A384BD();
						iLocal_42 = 5;
					}
					break;
				
				case 4:
					func_4();
					if (unk_0x1DAD7CE53BEE7710())
					{
						if (unk_0x5A62ACF1A0701002(3, unk_0xA16EC202D9D35357(), 4, 3f, &uLocal_48))
						{
							iLocal_47 = unk_0x09560C7DE2A384BD();
							iLocal_42 = 5;
						}
					}
					else if (unk_0xE37B6C5305D21FE9(3, Local_44, 4, 3f, &uLocal_48))
					{
						if (Global_86944.f_358 == unk_0xB793F1A0B6CC4AE1("AGENCY_PREP_1") || (unk_0x16CDA1894CFE0781(unk_0xB793F1A0B6CC4AE1("agency_prep1")) > 0 && func_3(0)))
						{
							Global_86944.f_358 = unk_0xB793F1A0B6CC4AE1("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_86874 = 1;
						}
						iLocal_47 = unk_0x09560C7DE2A384BD();
						iLocal_42 = 5;
					}
					break;
				
				case 5:
					if (unk_0x09560C7DE2A384BD() > (iLocal_47 + 60000) || !unk_0x2603AEA1B0EFBB87(uLocal_48))
					{
						func_1();
					}
					else if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
					{
						if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
						{
							if (unk_0x2603AEA1B0EFBB87(uLocal_48))
							{
								unk_0x2E908E2391995181(uLocal_48);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_42 = 0;
	iLocal_43 = 0;
	unk_0x82706E6C897B0FA1();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_328[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_4()
{
	if (unk_0x09560C7DE2A384BD() > iLocal_47 + 30000)
	{
		iLocal_42 = 5;
	}
}

void func_5()
{
	var uVar0;
	
	switch (iLocal_43)
	{
		case 0:
			iLocal_43 = 1;
			iLocal_47 = unk_0x09560C7DE2A384BD();
			break;
		
		case 1:
			while (!func_13())
			{
				unk_0x4EDE34FBADD967A6(0);
				if (func_12() == 3)
				{
					iLocal_42 = 3;
				}
				if (func_12() == 4)
				{
					iLocal_42 = 4;
				}
				if (func_12() == 5)
				{
					iLocal_42 = 2;
				}
				if (unk_0x09560C7DE2A384BD() > iLocal_47 + 30000)
				{
					iLocal_47 = unk_0x09560C7DE2A384BD();
					func_8(0);
				}
			}
			if (iLocal_42 == 0)
			{
				iLocal_42 = 5;
			}
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				func_6(unk_0xA16EC202D9D35357(), &Local_44, &uVar0);
			}
			iLocal_47 = unk_0x09560C7DE2A384BD();
			break;
	}
}

void func_6(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	struct<3> Var25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				unk_0x8C4964C5036133AB(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0x400883584ED2E634(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) - unk_0xBF8499F46AD9093A(uParam0, 1) };
				fVar14 = unk_0x3C616B96B92181C5(Var10.f_0, Var10.f_1);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_7(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (unk_0x45ADF7D9ECA3040B(unk_0x89633AD59A98C2FE(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * unk_0xBBDA792448DB5A89((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0xCC6B7A025E72F529(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)) > unk_0x2A488C176D52CCA5(unk_0xCC6B7A025E72F529(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0xCC6B7A025E72F529(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0xCC5DCC29F6E83651(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x65595DB38D0F502A(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (Var25.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_7(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_8(int iParam0)
{
	if (Global_14552)
	{
		func_10(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_9())
	{
		Global_14394.f_1 = 3;
	}
}

int func_9()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_11(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	return Global_16710;
}

int func_13()
{
	if (Global_15693 == 0)
	{
		return 1;
	}
	return 0;
}

