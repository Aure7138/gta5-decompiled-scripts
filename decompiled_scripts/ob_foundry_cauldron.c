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
	
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC844350D5D58C99A(uScriptParam_0))
		{
			if (unk_0x63D2C15453688621(uScriptParam_0) && unk_0x8A22C4C08282BF26(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							uVar0 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
							if (unk_0x31609A585163CBAC(uVar0))
							{
								if (unk_0xBD307E66C0669BFC(uVar0))
								{
									if (unk_0x7C2B4C53942076F8())
									{
										unk_0x9E5E60D8C63FD9D1();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x25F7A4D42AF2AB93())
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (!unk_0xC844350D5D58C99A(uLocal_4))
								{
									uLocal_4 = unk_0x4B72871A3BE7B474(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x83A8177D302E1A7E(uLocal_3))
								{
									if (unk_0xC844350D5D58C99A(uLocal_4))
									{
										uVar0 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
										if (unk_0x31609A585163CBAC(uVar0))
										{
											if (unk_0xBD307E66C0669BFC(uVar0))
											{
												if (unk_0x7C2B4C53942076F8())
												{
													uLocal_3 = unk_0xC1879030EB463216("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x83A8177D302E1A7E(uLocal_3))
	{
		unk_0xF7E25143642732EA(uLocal_3, 0);
	}
	if (unk_0xC844350D5D58C99A(uLocal_4))
	{
		unk_0xEEEE2E5FA6F78DF0(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x10FAF14A60A0DBE1();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x7F8A39872A07D2CE(uParam0, uParam0))
	{
	}
}

