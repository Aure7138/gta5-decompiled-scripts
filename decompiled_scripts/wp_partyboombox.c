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
	if (unk_0x968BF1C2C695B61A(joaat("wp_partyboombox")) > 1)
	{
		unk_0xC23A229F78DAD92A();
	}
	if (unk_0x8D841F1DD3FA555F(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x52AB115D3D6A8417())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x0C937048CF6952B5() >= 22 || unk_0x0C937048CF6952B5() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x7DB3BD08E8BBFB35("ID2_21_G_Night"))
				{
					unk_0xD5C95DDAD3BFEED7("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x2CB3B76C90F08111() && !unk_0xF33755A765033580())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x7DB3BD08E8BBFB35("ID2_21_G_Night"))
	{
		unk_0x68ED5C4FF323C850("ID2_21_G_Night");
	}
	unk_0xC23A229F78DAD92A();
}

