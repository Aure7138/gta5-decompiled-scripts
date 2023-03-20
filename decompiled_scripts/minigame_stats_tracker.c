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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_17();
	}
	while (true)
	{
		switch (iLocal_44)
		{
			case 0:
				uLocal_45 = unk_0xC97D787CE7726A2F("mission_complete");
				iLocal_44 = 1;
				break;
			
			case 1:
				if (unk_0x5E3461E729DA646E(uLocal_45))
				{
					iLocal_44 = 2;
				}
				break;
			
			case 2:
				unk_0x313D69EBEAEEFAEC(uLocal_45, "SET_MISSION_TITLE", ScriptParam_0.f_0, ScriptParam_0.f_1, 0, 0, 0);
				unk_0x7AD6F399B9A62CBD(uLocal_45, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !unk_0x471A7F8C908126F0(ScriptParam_0.f_5.f_2))
				{
					unk_0x1CB901CAC3EE6BC9(uLocal_45, "SET_TOTAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0x7AD6F399B9A62CBD(uLocal_45, "SET_MEDAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x7AD6F399B9A62CBD(uLocal_45, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					unk_0x48F299599202B77A(uLocal_45, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(ScriptParam_0.f_9[iVar0 /*7*/]);
					unk_0x4BD4D58838D3F8E5(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x4BD4D58838D3F8E5(2);
						unk_0x4BD4D58838D3F8E5(0);
						unk_0x4BD4D58838D3F8E5(0);
						unk_0x0F79C8080022554A("STRING");
						unk_0xD2F4956C0D8BE6FA(unk_0xF34EE736CF047844((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0xE6EC84BF3A7A64B6();
						if (!unk_0x471A7F8C908126F0(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0x471A7F8C908126F0(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !unk_0x471A7F8C908126F0(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x0F79C8080022554A(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							unk_0x7FAFF3E791AF486A(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							unk_0xE6EC84BF3A7A64B6();
						}
					}
					else
					{
						unk_0x4BD4D58838D3F8E5(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0xC4F81CF078CCB564(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x0F79C8080022554A("NUMBER");
							unk_0xE593B82056888C22(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							unk_0xE6EC84BF3A7A64B6();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0xC4F81CF078CCB564(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x0F79C8080022554A("NUMBER");
							unk_0xE593B82056888C22(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							unk_0xE6EC84BF3A7A64B6();
						}
						if (!unk_0x471A7F8C908126F0(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0x471A7F8C908126F0(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0x7E86CE5F658823DB();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !unk_0x471A7F8C908126F0(ScriptParam_0.f_5.f_2))
				{
					unk_0x48F299599202B77A(uLocal_45, "SET_TOTAL");
					unk_0x4BD4D58838D3F8E5(ScriptParam_0.f_5);
					if (!unk_0x471A7F8C908126F0(ScriptParam_0.f_5.f_3))
					{
						func_16(ScriptParam_0.f_5.f_3);
					}
					else
					{
						unk_0xC4F81CF078CCB564(ScriptParam_0.f_5.f_1);
					}
					func_16(ScriptParam_0.f_5.f_2);
					unk_0x7E86CE5F658823DB();
				}
				unk_0x48F299599202B77A(uLocal_45, "DRAW_MENU_LIST");
				unk_0x7E86CE5F658823DB();
				func_12(1);
				func_9(&uLocal_46);
				if (!func_8(Global_97358.f_17351, 4096))
				{
					func_6(&(Global_97358.f_17351), 4096);
				}
				iLocal_44 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_46) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || unk_0x2E9CF5C574019636()) || Global_24588)
				{
					func_17();
				}
				else
				{
					func_1(1);
					unk_0x6FFAE2D893387C6F(uLocal_45, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xA27CA832C6E89714(10))
					{
						unk_0xAB10BEEBB0614A3E(10);
					}
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_17();
}

void func_1(int iParam0)
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (Global_14551)
	{
		func_14(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_13())
	{
		Global_14393.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
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
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_16(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_17()
{
	unk_0x76D57BAF1F432EA7(&uLocal_45);
	Global_24588 = 0;
	func_1(0);
	unk_0xE60DEFFB2A853900();
}

