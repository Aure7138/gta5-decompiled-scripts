#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xD63E63DFACCEB80E(2))
	{
		func_1();
	}
	if (unk_0x746960881FB19A89(uScriptParam_0))
	{
		unk_0xD9B13F0A69759C12(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x746960881FB19A89(uScriptParam_0))
		{
			if (unk_0x65E80118D23AFB04(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x2722B58EF4A39A5E(uScriptParam_0))
						{
							unk_0xDA293E5084610B09("map_objects");
							if (unk_0x3DA2EED4204CE591("map_objects"))
							{
								unk_0x70605753AED89021(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xE60DEFFB2A853900();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x6B08EC9A88700FBB(uParam0, uParam0))
	{
	}
}

