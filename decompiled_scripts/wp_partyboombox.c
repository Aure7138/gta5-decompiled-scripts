#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x8E34C953364A76DD(joaat("wp_partyboombox")) > 1)
	{
		unk_0x5E8B6D17FF91CD59();
	}
	if (unk_0xC11469DCA6FC3BB5(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x4F4FF2F3B81506A7())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xC82CF208C2B19199() >= 22 || unk_0xC82CF208C2B19199() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x4A5A22615B284C0D("ID2_21_G_Night"))
				{
					unk_0xA9E0EA15782C4BEE("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xEEA50AAE36800059() && !unk_0xED20CB1F5297791D())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x4A5A22615B284C0D("ID2_21_G_Night"))
	{
		unk_0x47AA556033E94AA2("ID2_21_G_Night");
	}
	unk_0x5E8B6D17FF91CD59();
}

