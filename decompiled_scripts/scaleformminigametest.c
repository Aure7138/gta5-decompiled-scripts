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
	uLocal_20 = unk_0x52CE8C31DD5898E7(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x2C22E7D1C80A53EF())
	{
		unk_0xA0303A6B8C99DD6A(500);
	}
	if (unk_0x2EC83C7ACA23E8A4(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x474309DF4921072A("p_bubblegum");
	while (!unk_0x1E3F61C2C1E29520(uLocal_18))
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
			uLocal_19 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x0D2E3F017CBCB8A8(uLocal_19))
			{
				unk_0xD769455216FEB03D(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xF3FCD007B6955B38(uLocal_19, 0.01f);
				unk_0xD17B21801B84F333(uLocal_19, 0.02f);
				unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
			}
			unk_0x32479C670EB9962F(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x04F50370A3D0809C(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14422 == 0)
	{
		if (unk_0x7F6103BD34B839B0(2, 189) || unk_0x7F6103BD34B839B0(2, 190))
		{
			Global_14422 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14422 = 0;
	}
	if (Global_14422 == 0)
	{
		if (unk_0x2A57AED61E15C7C7(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(10);
			unk_0x0FFE3C1DBBA72236(fLocal_25);
			unk_0xE73340DA551C95E1();
		}
		if (unk_0x2A57AED61E15C7C7(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(11);
			unk_0x0FFE3C1DBBA72236(fLocal_28);
			unk_0xE73340DA551C95E1();
		}
		if (unk_0x2A57AED61E15C7C7(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(8);
			unk_0x0FFE3C1DBBA72236(fLocal_31);
			unk_0xE73340DA551C95E1();
		}
		if (unk_0x2A57AED61E15C7C7(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(9);
			unk_0x0FFE3C1DBBA72236(fLocal_34);
			unk_0xE73340DA551C95E1();
		}
		if (unk_0x2A57AED61E15C7C7(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(17);
			unk_0x0FFE3C1DBBA72236(fLocal_37);
			unk_0xE73340DA551C95E1();
		}
		if (unk_0x2A57AED61E15C7C7(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(15);
			unk_0x0FFE3C1DBBA72236(fLocal_40);
			unk_0xE73340DA551C95E1();
		}
		if (unk_0x2A57AED61E15C7C7(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(16);
			unk_0x0FFE3C1DBBA72236(fLocal_43);
			unk_0xE73340DA551C95E1();
		}
		if (unk_0x2A57AED61E15C7C7(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x7F6103BD34B839B0(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x7F6103BD34B839B0(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0xB9D4F4DE7E7EC038(uParam0, "SET_INPUT_EVENT");
			unk_0x7CBFB9F4AF33C67E(14);
			unk_0x0FFE3C1DBBA72236(fLocal_46);
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_2()
{
	if (unk_0x0D2E3F017CBCB8A8(uLocal_19))
	{
		unk_0x50C86ABC13A071F8(uLocal_19, 0);
	}
	unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x6B0F857FD4BCD4AB(0);
	unk_0x94724F7C938EBE34(1);
	unk_0xA12A0D38735CCBF2(&uLocal_18);
	unk_0x78C587487CD40B92();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0x88B0F0DC270164B7(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14604)
	{
		func_6(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_5())
	{
		Global_14443.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

