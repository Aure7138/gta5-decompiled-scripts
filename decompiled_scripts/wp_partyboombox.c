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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("wp_partyboombox")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	if (unk_0xC968670BFACE42D9(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xC5042CC6F5E3D450())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x25223CA6B4D20B7F() >= 22 || unk_0x25223CA6B4D20B7F() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x88A741E44A2B3495("ID2_21_G_Night"))
				{
					unk_0x41B4893843BBDB74("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xA41A05B6CB741B85() && !unk_0xD9D2CFFF49FAB35F())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x88A741E44A2B3495("ID2_21_G_Night"))
	{
		unk_0xEE6C5AD3ECE0A82D("ID2_21_G_Night");
	}
	unk_0x1090044AD1DA76FA();
}

