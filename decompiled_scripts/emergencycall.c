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
	int iLocal_48 = 0;
	var uLocal_49 = 0;
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
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x44243F2E2F58B8E3())
					{
						if (unk_0xD1DA2178DF479B5F(7, unk_0x18F7BE9ACB7D08F4(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x5AFB8ED811F05E4D();
							iLocal_43 = 5;
						}
					}
					else if (unk_0xE5AF0A904F86D5A5(7, Local_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x5AFB8ED811F05E4D();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x44243F2E2F58B8E3())
					{
						if ((func_7(unk_0x8CFC7D6E1DA5D304(), 0) && func_4(unk_0x8CFC7D6E1DA5D304()) == 5) && Global_1824090)
						{
							if (Global_1824091 == 0)
							{
								Global_1824091 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0xD1DA2178DF479B5F(5, unk_0x18F7BE9ACB7D08F4(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x5AFB8ED811F05E4D();
							iLocal_43 = 5;
						}
					}
					else if (unk_0xE5AF0A904F86D5A5(5, Local_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x5AFB8ED811F05E4D();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x44243F2E2F58B8E3())
					{
						if (unk_0xD1DA2178DF479B5F(3, unk_0x18F7BE9ACB7D08F4(), 4, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x5AFB8ED811F05E4D();
							iLocal_43 = 5;
						}
					}
					else if (unk_0xE5AF0A904F86D5A5(3, Local_45, 4, 3f, &uLocal_49, 0, 0))
					{
						if (Global_89471.f_358 == unk_0x6E987D62C8535B6E("AGENCY_PREP_1") || (unk_0xE7FAF8E78F7D3A73(unk_0x6E987D62C8535B6E("agency_prep1")) > 0 && func_3(0)))
						{
							Global_89471.f_358 = unk_0x6E987D62C8535B6E("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_89401 = 1;
						}
						iLocal_48 = unk_0x5AFB8ED811F05E4D();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x5AFB8ED811F05E4D() > (iLocal_48 + 60000) || !unk_0xE20720E463164A1E(uLocal_49))
					{
						func_1();
					}
					else if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
					{
						if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
						{
							if (unk_0xE20720E463164A1E(uLocal_49))
							{
								unk_0x4BCDEC7B5BBE5C8D(uLocal_49);
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
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x810C5D6462DD69E6();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104551.f_9055.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x5AFB8ED811F05E4D() > iLocal_48 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = unk_0x5AFB8ED811F05E4D();
			break;
		
		case 1:
			while (!func_17())
			{
				unk_0x4EDE34FBADD967A6(0);
				if (func_16() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_16() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_16() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x5AFB8ED811F05E4D() > iLocal_48 + 30000)
				{
					iLocal_48 = unk_0x5AFB8ED811F05E4D();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				func_10(unk_0x18F7BE9ACB7D08F4(), &Local_45, &uVar0);
			}
			iLocal_48 = unk_0x5AFB8ED811F05E4D();
			break;
	}
}

void func_10(var uParam0, var uParam1, var uParam2)
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
				unk_0xEA1F20FEC8701002(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0x54B2CE59D6C4315A(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) - unk_0x761660F5CE986DC4(uParam0, 1) };
				fVar14 = unk_0x7F21F40674579303(Var10.f_0, Var10.f_1);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_11(fVar14, fVar16, 90f))
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
				else if (unk_0xC73BA4A62D56A649(unk_0x7463275B72CFBD3F(*uParam1, 1, 1, 1077936128, 0)))
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
					if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0xA89DC5E1C1F12DBF(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > unk_0x2A488C176D52CCA5(unk_0xA89DC5E1C1F12DBF(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0xA89DC5E1C1F12DBF(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0xD8E527CB54D2AA22(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0xA3F56DCC3ACBDEC5(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
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

int func_11(float fParam0, float fParam1, float fParam2)
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

void func_12(int iParam0)
{
	if (Global_14615)
	{
		func_14(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_13())
	{
		Global_14453.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	return Global_16773;
}

int func_17()
{
	if (Global_15756 == 0)
	{
		return 1;
	}
	return 0;
}

