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
	if (unk_0x7D9C4B359376D38A(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
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
					if (unk_0x3A711520F83BAE98())
					{
						if (unk_0x70C84F4C9DFC927F(7, unk_0xFC1458A37D98B502(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x53C562FD2B9E3AB0();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x23AE8F1DF396E41E(7, Local_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x53C562FD2B9E3AB0();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x3A711520F83BAE98())
					{
						if ((func_7(unk_0x9EB17624F44A8DA4(), 0) && func_4(unk_0x9EB17624F44A8DA4()) == 5) && Global_1684978)
						{
							if (Global_1684979 == 0)
							{
								Global_1684979 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x70C84F4C9DFC927F(5, unk_0xFC1458A37D98B502(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x53C562FD2B9E3AB0();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x23AE8F1DF396E41E(5, Local_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x53C562FD2B9E3AB0();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x3A711520F83BAE98())
					{
						if (unk_0x70C84F4C9DFC927F(3, unk_0xFC1458A37D98B502(), 4, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x53C562FD2B9E3AB0();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x23AE8F1DF396E41E(3, Local_45, 4, 3f, &uLocal_49, 0, 0))
					{
						if (Global_89475.f_358 == unk_0x8B948C59217A295D("AGENCY_PREP_1") || (unk_0x8F38E94BBF3404CD(unk_0x8B948C59217A295D("agency_prep1")) > 0 && func_3(0)))
						{
							Global_89475.f_358 = unk_0x8B948C59217A295D("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_89405 = 1;
						}
						iLocal_48 = unk_0x53C562FD2B9E3AB0();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x53C562FD2B9E3AB0() > (iLocal_48 + 60000) || !unk_0xDB01A42DFF6FB273(uLocal_49))
					{
						func_1();
					}
					else if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
						{
							if (unk_0xDB01A42DFF6FB273(uLocal_49))
							{
								unk_0x241EE3366006220F(uLocal_49);
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
	unk_0x96A3D9A8A4C7AFD4();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
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
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x53C562FD2B9E3AB0() > iLocal_48 + 30000)
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
			iLocal_48 = unk_0x53C562FD2B9E3AB0();
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
				if (unk_0x53C562FD2B9E3AB0() > iLocal_48 + 30000)
				{
					iLocal_48 = unk_0x53C562FD2B9E3AB0();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				func_10(unk_0xFC1458A37D98B502(), &Local_45, &uVar0);
			}
			iLocal_48 = unk_0x53C562FD2B9E3AB0();
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
				unk_0x5C41B0B656C02102(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0xA72AB170F6ACDE36(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - unk_0xB3328BA8976B416C(uParam0, 1) };
				fVar14 = unk_0xA67DD8488EBA5F6D(Var10.f_0, Var10.f_1);
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
				else if (unk_0x81B7CF786E5C8681(unk_0x5B253C8E41C51E8E(*uParam1, 1, 1, 1077936128, 0)))
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
					if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 294f, -895f, 28f, 1) < 25f || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0x9EA50C5EC175E58E(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > unk_0x2A488C176D52CCA5(unk_0x9EA50C5EC175E58E(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0x9EA50C5EC175E58E(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0xFF32E7A273D539FD(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x16ACABF450EB00B4(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
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
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
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
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
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

