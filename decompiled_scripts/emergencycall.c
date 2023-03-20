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
	if (unk_0x8D841F1DD3FA555F(11))
	{
		iLocal_42 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
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
					if (unk_0x1C6DF6AD69BE853E())
					{
						if (unk_0x925AE10C4D8FD477(7, unk_0x81873881071CD9FE(), 2, 3f, &uLocal_48))
						{
							iLocal_47 = unk_0x48E480685981C7D4();
							iLocal_42 = 5;
						}
					}
					else if (unk_0x6C8BADD51F67DB43(7, Local_44, 2, 3f, &uLocal_48))
					{
						iLocal_47 = unk_0x48E480685981C7D4();
						iLocal_42 = 5;
					}
					break;
				
				case 3:
					func_4();
					if (unk_0x1C6DF6AD69BE853E())
					{
						if (unk_0x925AE10C4D8FD477(5, unk_0x81873881071CD9FE(), 2, 3f, &uLocal_48))
						{
							iLocal_47 = unk_0x48E480685981C7D4();
							iLocal_42 = 5;
						}
					}
					else if (unk_0x6C8BADD51F67DB43(5, Local_44, 2, 3f, &uLocal_48))
					{
						iLocal_47 = unk_0x48E480685981C7D4();
						iLocal_42 = 5;
					}
					break;
				
				case 4:
					func_4();
					if (unk_0x1C6DF6AD69BE853E())
					{
						if (unk_0x925AE10C4D8FD477(3, unk_0x81873881071CD9FE(), 4, 3f, &uLocal_48))
						{
							iLocal_47 = unk_0x48E480685981C7D4();
							iLocal_42 = 5;
						}
					}
					else if (unk_0x6C8BADD51F67DB43(3, Local_44, 4, 3f, &uLocal_48))
					{
						if (Global_87639.f_358 == unk_0x8DAF7A748E41AD46("AGENCY_PREP_1") || (unk_0x968BF1C2C695B61A(unk_0x8DAF7A748E41AD46("agency_prep1")) > 0 && func_3(0)))
						{
							Global_87639.f_358 = unk_0x8DAF7A748E41AD46("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_87569 = 1;
						}
						iLocal_47 = unk_0x48E480685981C7D4();
						iLocal_42 = 5;
					}
					break;
				
				case 5:
					if (unk_0x48E480685981C7D4() > (iLocal_47 + 60000) || !unk_0xD5E985A0FD4FBF0A(uLocal_48))
					{
						func_1();
					}
					else if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
					{
						if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
						{
							if (unk_0xD5E985A0FD4FBF0A(uLocal_48))
							{
								unk_0xCC6DB5D42DAB4B04(uLocal_48);
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
	unk_0xC23A229F78DAD92A();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_4()
{
	if (unk_0x48E480685981C7D4() > iLocal_47 + 30000)
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
			iLocal_47 = unk_0x48E480685981C7D4();
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
				if (unk_0x48E480685981C7D4() > iLocal_47 + 30000)
				{
					iLocal_47 = unk_0x48E480685981C7D4();
					func_8(0);
				}
			}
			if (iLocal_42 == 0)
			{
				iLocal_42 = 5;
			}
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				func_6(unk_0x81873881071CD9FE(), &Local_44, &uVar0);
			}
			iLocal_47 = unk_0x48E480685981C7D4();
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
				unk_0x9F7E94EEF720E913(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0xDA40F239F50BE0C4(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - unk_0xB6AE0DAE06D56288(uParam0, 1) };
				fVar14 = unk_0x097CA9356FED843D(Var10.f_0, Var10.f_1);
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
				else if (unk_0x0A19925AC931BA81(unk_0x3A728EE7795D88C6(*uParam1, 1, 1, 1077936128, 0)))
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
					if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0x957F1AE07A974C5E(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > unk_0x2A488C176D52CCA5(unk_0x957F1AE07A974C5E(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0x957F1AE07A974C5E(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0x751FA16E55F0A171(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x26CECBCADF60693F(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
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
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
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
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
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

