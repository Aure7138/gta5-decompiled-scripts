#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x524AF15206846700(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
		{
			if (unk_0x179C5C4A19D3D535(uScriptParam_0) && unk_0xD32535FA4397160F(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
						{
							uVar0 = unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030());
							if (unk_0xBFF8C08B5EEF0974(uVar0))
							{
								if (unk_0x73F79DD3F5F32B29(uVar0))
								{
									if (unk_0x7A50CCA7C832A2D1())
									{
										unk_0x8E029D91177781A9();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xD84E191BFE45F102())
						{
							if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
							{
								if (!unk_0xD2CFFE76B625AE55(uLocal_4))
								{
									uLocal_4 = unk_0xE3250749A1141EC2(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x82E739904D3B17C8(uLocal_3))
								{
									if (unk_0xD2CFFE76B625AE55(uLocal_4))
									{
										uVar0 = unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030());
										if (unk_0xBFF8C08B5EEF0974(uVar0))
										{
											if (unk_0x73F79DD3F5F32B29(uVar0))
											{
												if (unk_0x7A50CCA7C832A2D1())
												{
													uLocal_3 = unk_0x8374DCD8219A5A11("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
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
	if (unk_0x82E739904D3B17C8(uLocal_3))
	{
		unk_0xD1FF5A06AAD731E1(uLocal_3, 0);
	}
	if (unk_0xD2CFFE76B625AE55(uLocal_4))
	{
		unk_0x7DC0C08D21B1080D(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x7C3AA2D27E16E2AD();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xC1C5B83BB6719C6C(uParam0, uParam0))
	{
	}
}

