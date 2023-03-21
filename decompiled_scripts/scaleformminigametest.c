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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	uLocal_20 = unk_0xACAD99314B51277E(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x260395BA7F0C83CB())
	{
		unk_0xCF33E56642B34516(500);
	}
	if (unk_0xD4BE58A7E3E102AC(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x1FAFE9BB9D8960C1("p_bubblegum");
	while (!unk_0x08EA887200715AD9(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = unk_0x87B0FFB353287F00("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0xD2652A8A890B29BA(uLocal_19))
			{
				unk_0x88C9848645E010B6(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x03036E4985212F72(uLocal_19, 0.01f);
				unk_0xE0DE60FCD6596E42(uLocal_19, 0.02f);
				unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
			}
			unk_0xD1773DD05FE2AB54(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x1C65AC18AFC2CA39(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_19465 == 0)
	{
		if (unk_0x3772881BFFE6C3F8(2, 189) || unk_0x3772881BFFE6C3F8(2, 190))
		{
			Global_19465 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_19465 = 0;
	}
	if (Global_19465 == 0)
	{
		if (unk_0x26BB91778477F482(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(10);
			unk_0xD435957F6275B434(fLocal_25);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (unk_0x26BB91778477F482(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(11);
			unk_0xD435957F6275B434(fLocal_28);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (unk_0x26BB91778477F482(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(8);
			unk_0xD435957F6275B434(fLocal_31);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (unk_0x26BB91778477F482(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(9);
			unk_0xD435957F6275B434(fLocal_34);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (unk_0x26BB91778477F482(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(17);
			unk_0xD435957F6275B434(fLocal_37);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (unk_0x26BB91778477F482(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(15);
			unk_0xD435957F6275B434(fLocal_40);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (unk_0x26BB91778477F482(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(16);
			unk_0xD435957F6275B434(fLocal_43);
			unk_0xAC7C2DE2DDC7AF03();
		}
		if (unk_0x26BB91778477F482(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x3772881BFFE6C3F8(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x3772881BFFE6C3F8(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0xF1BC72CEC2746995(uParam0, "SET_INPUT_EVENT");
			unk_0xD02F24F3E2DB263A(14);
			unk_0xD435957F6275B434(fLocal_46);
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

void func_2()
{
	if (unk_0xD2652A8A890B29BA(uLocal_19))
	{
		unk_0xDC5BA18043353983(uLocal_19, 0);
	}
	unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x269298D09D57BFCF(0);
	unk_0x0D23E3918F7AF11B(1);
	unk_0x749CA887CB0AFEC9(&uLocal_18);
	unk_0x9C9E32388A7886A2();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0xA1E7A40E1F56E511(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

bool func_7()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_8()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

int func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

