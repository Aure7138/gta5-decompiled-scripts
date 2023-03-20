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
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = 0;
	bool bLocal_23 = 0;
	float fLocal_24 = 0f;
	bool bLocal_25 = 0;
	bool bLocal_26 = 0;
	float fLocal_27 = 0f;
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	float fLocal_30 = 0f;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	float fLocal_33 = 0f;
	bool bLocal_34 = 0;
	bool bLocal_35 = 0;
	float fLocal_36 = 0f;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	float fLocal_42 = 0f;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	float fLocal_45 = 0f;
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
	uLocal_19 = unk_0x2290D76D0A4ACACA(100f, 100f, 30f);
	iLocal_21 = 1;
	fLocal_24 = 0f;
	fLocal_27 = 0f;
	fLocal_30 = 0f;
	fLocal_33 = 0f;
	fLocal_36 = 0f;
	fLocal_39 = 0f;
	fLocal_42 = 0f;
	fLocal_45 = 0f;
	if (unk_0x2E9CF5C574019636())
	{
		unk_0xF391B7BD1F131C3F(500);
	}
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_2();
	}
	uLocal_17 = unk_0xC97D787CE7726A2F("p_bubblegum");
	while (!unk_0x5E3461E729DA646E(uLocal_17))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_20 == 1)
		{
		}
		if (iLocal_21 == 1)
		{
			iLocal_21 = 0;
			uLocal_18 = unk_0x9DC0C451516E13AF("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x5329DB72517417AE(uLocal_18))
			{
				unk_0xD137F1896B8B6A2E(uLocal_18, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xD8BDF8D499C93FD6(uLocal_18, 0.01f);
				unk_0x894CB06DA29A7D57(uLocal_18, 0.02f);
				unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
			}
			unk_0xAFF0147EA2454485(uLocal_19, 66);
		}
		iLocal_20 = 1;
		unk_0x6FFAE2D893387C6F(uLocal_17, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_17);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14372 == 0)
	{
		if (unk_0x859C6F0CEF1CB9FE(2, 189) || unk_0x859C6F0CEF1CB9FE(2, 190))
		{
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14372 = 0;
	}
	if (Global_14372 == 0)
	{
		if (unk_0x205C5BF7277043DF(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 189))
		{
			bLocal_22 = false;
			fLocal_24 = 0f;
		}
		if (!bLocal_22 == bLocal_23)
		{
			bLocal_23 = bLocal_22;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(10);
			unk_0xC4F81CF078CCB564(fLocal_24);
			unk_0x7E86CE5F658823DB();
		}
		if (unk_0x205C5BF7277043DF(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 190))
		{
			bLocal_25 = false;
			fLocal_27 = 0f;
		}
		if (!bLocal_25 == bLocal_26)
		{
			bLocal_26 = bLocal_25;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(11);
			unk_0xC4F81CF078CCB564(fLocal_27);
			unk_0x7E86CE5F658823DB();
		}
		if (unk_0x205C5BF7277043DF(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 188))
		{
			bLocal_28 = false;
			fLocal_30 = 0f;
		}
		if (!bLocal_28 == bLocal_29)
		{
			bLocal_29 = bLocal_28;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(8);
			unk_0xC4F81CF078CCB564(fLocal_30);
			unk_0x7E86CE5F658823DB();
		}
		if (unk_0x205C5BF7277043DF(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 187))
		{
			bLocal_31 = false;
			fLocal_33 = 0f;
		}
		if (!bLocal_31 == bLocal_32)
		{
			bLocal_32 = bLocal_31;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(9);
			unk_0xC4F81CF078CCB564(fLocal_33);
			unk_0x7E86CE5F658823DB();
		}
		if (unk_0x205C5BF7277043DF(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 202))
		{
			bLocal_34 = false;
			fLocal_36 = 0f;
		}
		if (!bLocal_34 == bLocal_35)
		{
			bLocal_35 = bLocal_34;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(17);
			unk_0xC4F81CF078CCB564(fLocal_36);
			unk_0x7E86CE5F658823DB();
		}
		if (unk_0x205C5BF7277043DF(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 204))
		{
			bLocal_37 = false;
			fLocal_39 = 0f;
		}
		if (!bLocal_37 == bLocal_38)
		{
			bLocal_38 = bLocal_37;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(15);
			unk_0xC4F81CF078CCB564(fLocal_39);
			unk_0x7E86CE5F658823DB();
		}
		if (unk_0x205C5BF7277043DF(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 201))
		{
			bLocal_40 = false;
			fLocal_42 = 0f;
		}
		if (!bLocal_40 == bLocal_41)
		{
			bLocal_41 = bLocal_40;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(16);
			unk_0xC4F81CF078CCB564(fLocal_42);
			unk_0x7E86CE5F658823DB();
		}
		if (unk_0x205C5BF7277043DF(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (unk_0x859C6F0CEF1CB9FE(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (!unk_0x859C6F0CEF1CB9FE(2, 203))
		{
			bLocal_43 = false;
			fLocal_45 = 0f;
		}
		if (!bLocal_43 == bLocal_44)
		{
			bLocal_44 = bLocal_43;
			unk_0x48F299599202B77A(uParam0, "SET_INPUT_EVENT");
			unk_0x4BD4D58838D3F8E5(14);
			unk_0xC4F81CF078CCB564(fLocal_45);
			unk_0x7E86CE5F658823DB();
		}
	}
}

void func_2()
{
	if (unk_0x5329DB72517417AE(uLocal_18))
	{
		unk_0x0CF4B2266E47C15F(uLocal_18, 0);
	}
	unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0xAA7F469826C4FBBF(0);
	unk_0x35611EEE7A1FFEDB(1);
	unk_0x76D57BAF1F432EA7(&uLocal_17);
	unk_0xE60DEFFB2A853900();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14551)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14393.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
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

int func_7(int iParam0)
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

void func_8()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

