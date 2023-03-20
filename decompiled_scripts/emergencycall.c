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
	if (unk_0x4B4BD87E3D30C50D(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_5();
					break;
				
				case 1:
					break;
				
				case 2:
					func_4();
					if (unk_0x4C779B19E6DDCDA2())
					{
						if (unk_0x34CD440A2CF6BE35(7, unk_0x77F050A399DB77ED(), 2, 3f, &uLocal_49))
						{
							iLocal_48 = unk_0x3EAC9995EC220C5A();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x20342DAD3B8CAD0A(7, Local_45, 2, 3f, &uLocal_49))
					{
						iLocal_48 = unk_0x3EAC9995EC220C5A();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_4();
					if (unk_0x4C779B19E6DDCDA2())
					{
						if (unk_0x34CD440A2CF6BE35(5, unk_0x77F050A399DB77ED(), 2, 3f, &uLocal_49))
						{
							iLocal_48 = unk_0x3EAC9995EC220C5A();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x20342DAD3B8CAD0A(5, Local_45, 2, 3f, &uLocal_49))
					{
						iLocal_48 = unk_0x3EAC9995EC220C5A();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_4();
					if (unk_0x4C779B19E6DDCDA2())
					{
						if (unk_0x34CD440A2CF6BE35(3, unk_0x77F050A399DB77ED(), 4, 3f, &uLocal_49))
						{
							iLocal_48 = unk_0x3EAC9995EC220C5A();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x20342DAD3B8CAD0A(3, Local_45, 4, 3f, &uLocal_49))
					{
						if (Global_87936.f_358 == unk_0x39BD4614CF899227("AGENCY_PREP_1") || (unk_0xB1A77D5C890711F9(unk_0x39BD4614CF899227("agency_prep1")) > 0 && func_3(0)))
						{
							Global_87936.f_358 = unk_0x39BD4614CF899227("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_87866 = 1;
						}
						iLocal_48 = unk_0x3EAC9995EC220C5A();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x3EAC9995EC220C5A() > (iLocal_48 + 60000) || !unk_0x98D250B3523576C5(uLocal_49))
					{
						func_1();
					}
					else if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
					{
						if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
						{
							if (unk_0x98D250B3523576C5(uLocal_49))
							{
								unk_0x3DA1E537B9E3823F(uLocal_49);
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
	unk_0x2F798BA2098FDADE();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99250.f_7703.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_4()
{
	if (unk_0x3EAC9995EC220C5A() > iLocal_48 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_5()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = unk_0x3EAC9995EC220C5A();
			break;
		
		case 1:
			while (!func_13())
			{
				unk_0x4EDE34FBADD967A6(0);
				if (func_12() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_12() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_12() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x3EAC9995EC220C5A() > iLocal_48 + 30000)
				{
					iLocal_48 = unk_0x3EAC9995EC220C5A();
					func_8(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				func_6(unk_0x77F050A399DB77ED(), &Local_45, &uVar0);
			}
			iLocal_48 = unk_0x3EAC9995EC220C5A();
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
				unk_0x30BD9805DC6E24C3(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0xFDF2F85455659780(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) - unk_0xAF99169F0F5AE41D(uParam0, 1) };
				fVar14 = unk_0xA4F14A9B0DDEB91E(Var10.f_0, Var10.f_1);
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
				else if (unk_0xC78AD0D37FF0CE50(unk_0xBA479C5E1FD2C9B0(*uParam1, 1, 1, 1077936128, 0)))
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
					if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), 294f, -895f, 28f, 1) < 25f || unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0xB91BD3EFC17D9612(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1)) > unk_0x2A488C176D52CCA5(unk_0xB91BD3EFC17D9612(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0xB91BD3EFC17D9612(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0x4C62C3A1731B43F8(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x8DF1E9C686542134(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
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
	if (Global_14571)
	{
		func_10(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_9())
	{
		Global_14413.f_1 = 3;
	}
}

int func_9()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	return Global_16729;
}

int func_13()
{
	if (Global_15712 == 0)
	{
		return 1;
	}
	return 0;
}

