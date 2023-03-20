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
	if (unk_0x89522B8E487D4EF9(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
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
					if (unk_0x00AAD79B42B3E036())
					{
						if (unk_0x28DEE46190AC5C47(7, unk_0xE7869D5D7816A9B6(), 2, 3f, &uLocal_49))
						{
							iLocal_48 = unk_0x9D40BBF80D8F5E8A();
							iLocal_43 = 5;
						}
					}
					else if (unk_0xB966431F1A283F6B(7, Local_45, 2, 3f, &uLocal_49))
					{
						iLocal_48 = unk_0x9D40BBF80D8F5E8A();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_4();
					if (unk_0x00AAD79B42B3E036())
					{
						if (unk_0x28DEE46190AC5C47(5, unk_0xE7869D5D7816A9B6(), 2, 3f, &uLocal_49))
						{
							iLocal_48 = unk_0x9D40BBF80D8F5E8A();
							iLocal_43 = 5;
						}
					}
					else if (unk_0xB966431F1A283F6B(5, Local_45, 2, 3f, &uLocal_49))
					{
						iLocal_48 = unk_0x9D40BBF80D8F5E8A();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_4();
					if (unk_0x00AAD79B42B3E036())
					{
						if (unk_0x28DEE46190AC5C47(3, unk_0xE7869D5D7816A9B6(), 4, 3f, &uLocal_49))
						{
							iLocal_48 = unk_0x9D40BBF80D8F5E8A();
							iLocal_43 = 5;
						}
					}
					else if (unk_0xB966431F1A283F6B(3, Local_45, 4, 3f, &uLocal_49))
					{
						if (Global_87855.f_358 == unk_0xC7C6DDDE84A8E734("AGENCY_PREP_1") || (unk_0xFF6891E21E7FC193(unk_0xC7C6DDDE84A8E734("agency_prep1")) > 0 && func_3(0)))
						{
							Global_87855.f_358 = unk_0xC7C6DDDE84A8E734("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_87785 = 1;
						}
						iLocal_48 = unk_0x9D40BBF80D8F5E8A();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x9D40BBF80D8F5E8A() > (iLocal_48 + 60000) || !unk_0x047C317D140905D5(uLocal_49))
					{
						func_1();
					}
					else if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
					{
						if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
						{
							if (unk_0x047C317D140905D5(uLocal_49))
							{
								unk_0xAAC89012CED4BE63(uLocal_49);
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
	unk_0x52F20802944F8DCE();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99155.f_7699.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

void func_4()
{
	if (unk_0x9D40BBF80D8F5E8A() > iLocal_48 + 30000)
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
			iLocal_48 = unk_0x9D40BBF80D8F5E8A();
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
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_48 + 30000)
				{
					iLocal_48 = unk_0x9D40BBF80D8F5E8A();
					func_8(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				func_6(unk_0xE7869D5D7816A9B6(), &Local_45, &uVar0);
			}
			iLocal_48 = unk_0x9D40BBF80D8F5E8A();
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
				unk_0xE67882ADA97B9D94(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0x0164913B5CACDF6B(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) - unk_0x1141852D07400777(uParam0, 1) };
				fVar14 = unk_0x2C393A56EDEECDE4(Var10.f_0, Var10.f_1);
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
				else if (unk_0x412E24001F8D483B(unk_0x194F830AE4D9E6FB(*uParam1, 1, 1, 1077936128, 0)))
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
					if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 294f, -895f, 28f, 1) < 25f || unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0xF919633EBD0639D0(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) > unk_0x2A488C176D52CCA5(unk_0xF919633EBD0639D0(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0xF919633EBD0639D0(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0x107BA8B020DB9C5F(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x9CBE058E2C3ABB72(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
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
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
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
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
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

