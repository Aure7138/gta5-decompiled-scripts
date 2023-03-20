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
	int iLocal_45 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
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
	uVar0 = func_13();
	if (unk_0xD63E63DFACCEB80E(3))
	{
		unk_0xE60DEFFB2A853900();
	}
	while (true)
	{
		if (unk_0x5E3461E729DA646E(uVar0))
		{
			switch (iLocal_44)
			{
				case 0:
					func_11(&uVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&uVar0);
					iLocal_45 = unk_0x17103F66FBB44C3C();
					iLocal_44 = 1;
					break;
				
				case 1:
					if ((unk_0x17103F66FBB44C3C() - iLocal_45) > 3000)
					{
						func_9(&uVar0);
						iLocal_44 = 2;
					}
					break;
			}
			if (func_1(&uVar0, 0))
			{
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(var uParam0, bool bParam1)
{
	if (!func_8(&(uParam0->f_2)))
	{
		func_6(&(uParam0->f_2));
	}
	unk_0xAB10BEEBB0614A3E(14);
	unk_0xF36D3CA21410B7D5(1);
	unk_0x6FFAE2D893387C6F(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (unk_0x859C6F0CEF1CB9FE(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_3(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_2(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_4(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_4(bool bParam0)
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

bool func_5(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
}

void func_6(var uParam0)
{
	func_7(uParam0, 0f);
}

void func_7(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_4(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
}

void func_9(var uParam0)
{
	uParam0->f_1 = 300;
	func_6(&(uParam0->f_2));
	unk_0x48F299599202B77A(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	unk_0x4BD4D58838D3F8E5(300);
	unk_0x7E86CE5F658823DB();
}

void func_10(var uParam0)
{
	unk_0x48F299599202B77A(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	unk_0x7E86CE5F658823DB();
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	uParam0->f_1 = -1;
	unk_0x48F299599202B77A(*uParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	unk_0x4BD4D58838D3F8E5(iParam2);
	unk_0x4BD4D58838D3F8E5(iParam3);
	unk_0x4BD4D58838D3F8E5(iParam4);
	unk_0x4BD4D58838D3F8E5(iParam5);
	unk_0x7E86CE5F658823DB();
	if (bParam6)
	{
		unk_0x48F299599202B77A(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		unk_0x7E86CE5F658823DB();
	}
}

void func_12(var uParam0)
{
	unk_0x0F79C8080022554A(uParam0);
	unk_0xE6EC84BF3A7A64B6();
}

var func_13()
{
	return unk_0xC97D787CE7726A2F("SPLASH_TEXT");
}

